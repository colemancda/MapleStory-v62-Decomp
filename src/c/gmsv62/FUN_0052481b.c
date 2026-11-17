/* FUN_0052481b - 0x0052481b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052481b(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + -4);
  }
  FUN_005259ed(iVar1,iVar1 + iVar3 * 4,0);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + -4);
  }
  iVar3 = FUN_0052513d(iVar1,iVar1 + iVar3 * 4);
  FUN_00524f59(iVar3 - iVar1 >> 2,0,(int)&param_1 + 3);
  return;
}


