(*
    Copyright (c) 2009 David C.J. Matthews

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.
    
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
    
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*)

signature EXPORTTREESIG =
sig
    type pretty
    type types
    type location =
        { file: string, startLine: int, startPosition: int, endLine: int, endPosition: int }
    type locationProp

    (* Export tree. *)
    type ptProperties
    type exportTree = location * ptProperties list

    val PTprint: (int -> pretty) -> ptProperties (* Print the tree *)
    val PTtype: types -> ptProperties (* Type of an expression *)
    val PTdeclaredAt: location -> ptProperties (* Declaration location for id. *)
    val PTopenedAt: location -> ptProperties (* When an identifier comes from an "open" the location of the open. *)
    val PTstructureAt: location -> ptProperties (* When an identifier comes from open S or S.a the declaration of S. *)
    val PTreferences: (bool * location list) -> ptProperties  (* The references to the ID.  The first is true if this is exported. *)
    val PTparent: (unit -> exportTree) -> ptProperties 
    val PTpreviousSibling: (unit -> exportTree) -> ptProperties 
    val PTnextSibling: (unit -> exportTree) -> ptProperties 
    val PTfirstChild: (unit -> exportTree) -> ptProperties
    val PTcompletions: string list -> ptProperties
    val PTbreakPoint: bool ref -> ptProperties (* Breakpoint associated with location. *)
    val PTdefId: int -> ptProperties (* Defining binding id *)
    val PTrefId: int -> ptProperties (* Reference binding id *)
    
    type navigation =
        {parent: (unit -> exportTree) option,
         next: (unit -> exportTree) option,
         previous: (unit -> exportTree) option}
    
    val exportList :
        (navigation * 'a -> exportTree)
            * (unit -> exportTree) option -> 'a list -> ptProperties list
            
    val exportNavigationProps: navigation -> ptProperties list

    val getStringAsTree: navigation * string * location * ptProperties list -> exportTree
    
    val rootTreeTag: navigation Universal.tag
    
    val mapLocationProps: locationProp list -> ptProperties list

    (* Types that can be shared. *)
    structure Sharing:
    sig
        type types          = types
        and  locationProp   = locationProp
        and  pretty         = pretty
        and  ptProperties   = ptProperties
    end
end;
