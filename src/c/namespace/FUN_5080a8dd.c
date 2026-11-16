/* FUN_5080a8dd - 0x5080a8dd in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080a8dd(void *this,int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  short *psVar6;
  undefined1 local_14 [16];
  
  piVar1 = param_2;
  iVar2 = (**(code **)(*param_2 + 0x24))(param_2,(int)this + 0x28);
  if (iVar2 < 0) {
    FUN_5080450d(local_14,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
  }
  FUN_5080233b((void *)((int)this + 0x18),(int)(piVar1 + 6));
  FUN_50803e96(piVar1 + 0xe);
  FUN_508052b4((undefined4 *)((int)this + 0x38));
  *(int *)((int)this + 0x38) = piVar1[0xe];
  piVar4 = (int *)*param_1;
  if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*piVar4 + -4) >> 1;
  }
  if (uVar5 == 0) {
    FUN_50803e96(piVar1 + 0xf);
    FUN_508052b4((int *)((int)this + 0x3c));
    *(int *)((int)this + 0x3c) = piVar1[0xf];
    goto LAB_5080aa1d;
  }
  if (piVar4 == (int *)0x0) {
    psVar3 = (short *)0x0;
  }
  else {
    psVar3 = (short *)*piVar4;
  }
  if (*psVar3 == 0x2f) {
LAB_5080a9d3:
    piVar4 = FUN_5080bac1();
    param_2 = (int *)*piVar4;
    FUN_50803e96((int *)&param_2);
    FUN_50803e96((int *)&param_2);
    FUN_508052b4((undefined4 *)((int)this + 0x3c));
    *(undefined4 *)((int)this + 0x3c) = param_2;
    if (param_2 != (int *)0x0) {
      FUN_508040b6(param_2);
      param_2 = (int *)0x0;
    }
  }
  else {
    if (piVar4 == (int *)0x0) {
      psVar3 = (short *)0x0;
    }
    else {
      psVar3 = (short *)*piVar4;
    }
    if (*psVar3 == 0x5c) goto LAB_5080a9d3;
    if (piVar4 == (int *)0x0) {
      psVar3 = (short *)0x0;
    }
    else {
      psVar3 = (short *)*piVar4;
    }
    if ((undefined4 *)piVar1[0xf] == (undefined4 *)0x0) {
      psVar6 = (short *)0x0;
    }
    else {
      psVar6 = *(short **)piVar1[0xf];
    }
    FUN_5080aa4e(psVar6,psVar3);
    FUN_50803d00();
    FUN_50803e96((int *)&param_2);
    FUN_508052b4((undefined4 *)((int)this + 0x3c));
    *(undefined4 *)((int)this + 0x3c) = param_2;
    param_1 = param_2;
  }
  if (param_1 != (int *)0x0) {
    FUN_508040b6(param_1);
  }
LAB_5080aa1d:
  FUN_5080a81b((int *)((int)this + 0x3c));
  iVar2 = piVar1[0x10];
  *(int *)((int)this + 0x40) = iVar2;
  *(int *)((int)this + 0x44) = iVar2;
  *(int *)((int)this + 0x48) = iVar2 + param_3;
  iVar2 = (int)this + 0x54;
  if ((*(byte *)(piVar1[7] + 8) & 0x40) == 0) {
    iVar2 = (int)this + 0x5c;
  }
  *(int *)((int)this + 0x4c) = iVar2;
  return;
}


