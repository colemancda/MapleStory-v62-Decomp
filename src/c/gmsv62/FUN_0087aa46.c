/* FUN_0087aa46 - 0x0087aa46 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087aa46(DWORD param_1)

{
  int iVar1;
  
  if (PTR_FUN_009700d0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_009700d0)();
  }
  iVar1 = FUN_0087e371();
  if (iVar1 == 0) {
    __amsg_exit(0x10);
  }
  FUN_0087e3d8(iVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}


