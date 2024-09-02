In reality, most programs are not put on a single file. For example, subroutines could lie in different files made by other programmers. Thus, to invoke these programs in another file, we need a linker. 

>[!def|*] Linker
>The linker combines object files into object programs. It does this by constructing maps of full programs in memory. The map determines the addresses of all names and so external names are matched with exported names. In our source file, instructions referring to external names are finalized with addresses determined by the map. 
>Unmatched names are reported as errors.

