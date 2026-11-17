/* FUN_0072f3cc - 0x0072f3cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0072f3cc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_00413367(param_1 + 0x180,*(undefined4 *)(param_1 + 0x188));
  iVar2 = FUN_00413367(param_1 + 0x18c,*(undefined4 *)(param_1 + 0x194));
  piVar3 = (int *)FUN_004c2648();
  iVar4 = *piVar3;
  if (*piVar3 < iVar2) {
    iVar4 = iVar2;
  }
  return iVar4 + iVar1;
}


