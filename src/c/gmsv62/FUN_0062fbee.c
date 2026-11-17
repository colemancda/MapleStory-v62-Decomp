/* FUN_0062fbee - 0x0062fbee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0062fbee(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + -4);
  }
  iVar2 = param_2;
  if (param_2 == -1) {
    iVar2 = iVar1;
  }
  FUN_00631f9e(iVar1 + 1,2,(int)&param_2 + 3);
  FUN_0087a3a0((iVar2 * 5 + 5) * 4 + *param_1,iVar2 * 0x14 + *param_1,iVar1 * 0x14 + iVar2 * -0x14);
  return;
}


