/* FUN_0085cc85 - 0x0085cc85 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0085cc85(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0085cd50();
  if (iVar2 == 0) {
    iVar2 = 0;
    iVar4 = 0;
    while( true ) {
      FUN_0085cd50();
      iVar1 = *param_1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + -4);
      }
      if (iVar3 <= iVar2) goto LAB_0085ccc2;
      if (*(int *)(iVar4 + iVar1) == param_2) break;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x16;
    }
  }
  else {
LAB_0085ccc2:
    iVar2 = -1;
  }
  return iVar2;
}


