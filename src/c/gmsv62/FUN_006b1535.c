/* FUN_006b1535 - 0x006b1535 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006b1535(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0096a86c;
  while (((iVar2 == 0xd || (((0x13 < iVar2 && (iVar2 < 0x30)) || (param_1 <= piVar1[-1])))) ||
         (((piVar1[-1] + 0x20 <= param_1 || (param_2 <= *piVar1)) || (*piVar1 + 0x20 <= param_2)))))
  {
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
    if ((int *)0x96a9f3 < piVar1) {
      return 0;
    }
  }
  return iVar2 + 1;
}


