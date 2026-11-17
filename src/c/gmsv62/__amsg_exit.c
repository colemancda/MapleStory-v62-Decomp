/* __amsg_exit - 0x0087cae7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_009806f4 == 1) {
    FUN_0088570f();
  }
  FUN_00885748(param_1);
  (*(code *)PTR___exit_00970130)(0xff);
  return;
}


