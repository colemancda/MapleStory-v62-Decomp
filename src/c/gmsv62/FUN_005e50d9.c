/* FUN_005e50d9 - 0x005e50d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005e50d9(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*param_1 + -4);
  }
  iVar1 = param_2;
  if (param_2 == -1) {
    iVar1 = iVar2;
  }
  FUN_0045ebec(iVar2 + 1,2,(int)&param_2 + 3);
  FUN_0087a3a0(*param_1 + iVar1 + 1,*param_1 + iVar1,iVar2 - iVar1);
  return;
}


