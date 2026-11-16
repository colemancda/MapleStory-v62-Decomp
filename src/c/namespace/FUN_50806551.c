/* FUN_50806551 - 0x50806551 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 __fastcall FUN_50806551(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  short *in_EAX;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  IBinding *pIVar6;
  uint uVar7;
  int iVar8;
  undefined2 *unaff_EBX;
  int unaff_EBP;
  bool in_ZF;
  
  if ((in_ZF) || (*in_EAX == (short)unaff_EBX)) {
    puVar1 = *(undefined2 **)(unaff_EBP + 0x10);
    if (puVar1 != unaff_EBX) {
      piVar4 = (int *)(**(code **)*param_1)();
      *(int **)(puVar1 + 4) = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      *puVar1 = 0xd;
    }
    if (*(undefined2 **)(unaff_EBP + 0x14) != unaff_EBX) {
      *(undefined2 **)(unaff_EBP + 0x10) = unaff_EBX;
      *(undefined2 **)(unaff_EBP + -4) = unaff_EBX;
      iVar5 = FUN_50804288((void *)(unaff_EBP + 0x10));
      pIVar6 = (IBinding *)(**(code **)*param_1)();
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0x24),pIVar6);
      *(undefined4 **)(unaff_EBP + -0x10) = param_1 + 1;
      FUN_508012a1();
      piVar4 = (int *)param_1[5];
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if ((piVar4 == (int *)0x0) || (iVar8 = *piVar4, iVar8 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(iVar8 + -4) >> 1;
      }
      if (uVar7 == 0) {
        iVar8 = 0;
      }
      else {
        if (((int *)param_1[5] == (int *)0x0) || (iVar8 = *(int *)param_1[5], iVar8 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(iVar8 + -4) >> 1;
        }
        iVar8 = uVar7 - 1;
      }
      if ((undefined4 *)param_1[5] == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)param_1[5];
      }
      FUN_50803a6e(uVar3,iVar8);
      FUN_50803d00();
      FUN_50803e96((int *)(unaff_EBP + 8));
      FUN_508052b4((undefined4 *)(iVar5 + 0x28));
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(iVar5 + 0x28) = piVar4;
      if (piVar4 != (int *)0x0) {
        FUN_508040b6(piVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piVar4 = param_1 + 2;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        param_1[1] = 0;
      }
      piVar4 = (int *)(**(code **)*param_1)();
      *(undefined2 *)(unaff_EBP + -0x20) = 0xd;
      *(int **)(unaff_EBP + -0x18) = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar8 = FUN_50803aab((short *)(iVar5 + 0x30),(short *)(unaff_EBP + -0x20));
      if (iVar8 < 0) {
        FUN_5080dfed(iVar8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar8 = FUN_508037a7((short *)(unaff_EBP + -0x20));
      if (iVar8 < 0) {
        FUN_5080dfed(iVar8);
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 0x14);
      *(code **)(iVar5 + 0x50) = FUN_50806b87;
      *(code **)(iVar5 + 0x58) = FUN_50806dd4;
      *puVar2 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


