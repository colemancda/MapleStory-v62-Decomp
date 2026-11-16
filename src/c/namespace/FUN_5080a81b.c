/* FUN_5080a81b - 0x5080a81b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_5080a81b(int *param_1)

{
  short sVar1;
  int *piVar2;
  int *this;
  uint uVar3;
  size_t *psVar4;
  int iVar5;
  undefined1 local_14 [16];
  
  this = param_1;
  piVar2 = (int *)*param_1;
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*piVar2 + -4) >> 1;
  }
  if (uVar3 == 0) {
    return;
  }
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
    if (*piVar2 != 0) {
      uVar3 = *(uint *)(*piVar2 + -4) >> 1;
      goto LAB_5080a85f;
    }
  }
  uVar3 = 0;
LAB_5080a85f:
  sVar1 = *(short *)(iVar5 + -2 + uVar3 * 2);
  if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*piVar2 + -4) >> 1;
    }
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    psVar4 = FUN_50803a6e(iVar5,uVar3 - 1);
    if (psVar4 == (size_t *)0x0) {
      FUN_5080450d(local_14,0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
    }
    FUN_50803d00();
    FUN_50803d5b(this,(int *)&param_1);
    if (param_1 != (int *)0x0) {
      FUN_508040b6(param_1);
    }
  }
  return;
}


