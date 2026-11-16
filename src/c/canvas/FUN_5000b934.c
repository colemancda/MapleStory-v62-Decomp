/* FUN_5000b934 - 0x5000b934 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5000b934(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  void *this;
  int unaff_EBP;
  bool bVar6;
  
  FUN_50012d80();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  if ((0xffff < *(uint *)(unaff_EBP + 0xc)) || (0xffff < *(uint *)(unaff_EBP + 0x10))) {
LAB_5000bb55:
    uVar3 = 0x80070057;
    goto LAB_5000bb5a;
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + 8) = piVar1 + 8;
  FUN_500024f7();
  piVar1[10] = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar1[0xb] = *(int *)(unaff_EBP + 0x10);
  piVar1[0xd] = 0;
  piVar1[0xc] = 0;
  piVar1[0xf] = 0;
  piVar1[0xe] = 0;
  FUN_50003bdf(piVar1 + 0x10);
  FUN_5000b444((int)piVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piVar2 = piVar1 + 9;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    piVar1[8] = 0;
  }
  uVar3 = FUN_5000d476();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar4 = FUN_5000d476();
  if (iVar4 == 0) {
    if (DAT_500194ec == 1) {
      iVar4 = 1;
    }
    else if (DAT_500194ec == 2) {
      iVar4 = 2;
    }
    else if (DAT_500194ec == 0x201) {
      iVar4 = 0x201;
    }
    else {
      if (DAT_500194ec == 0x10002) {
        bVar6 = SBORROW4(*(int *)(unaff_EBP + 8),1);
        iVar4 = *(int *)(unaff_EBP + 8) + -1;
LAB_5000ba2a:
        uVar5 = (uint)(bVar6 == iVar4 < 0);
      }
      else {
        if (DAT_500194ec == 0x10201) {
          bVar6 = SBORROW4(*(int *)(unaff_EBP + 8),1);
          iVar4 = *(int *)(unaff_EBP + 8) + -1;
        }
        else {
          if (DAT_500194ec == 0x20002) {
            bVar6 = SBORROW4(*(int *)(unaff_EBP + 8),2);
            iVar4 = *(int *)(unaff_EBP + 8) + -2;
            goto LAB_5000ba2a;
          }
          if (DAT_500194ec != 0x20201) {
            uVar3 = 0x8000ffff;
            goto LAB_5000bb5a;
          }
          bVar6 = SBORROW4(*(int *)(unaff_EBP + 8),2);
          iVar4 = *(int *)(unaff_EBP + 8) + -2;
        }
        uVar5 = (bVar6 != iVar4 < 0) - 1 & 0x200;
      }
      iVar4 = uVar5 + 1;
    }
    if ((*(short *)(unaff_EBP + 0x24) == 0) || (*(short *)(unaff_EBP + 0x24) == 10))
    goto LAB_5000ba6e;
  }
  else {
    if ((iVar4 < 1) || (((2 < iVar4 && (iVar4 != 0x201)) && (iVar4 != 0x402)))) goto LAB_5000bb55;
LAB_5000ba6e:
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_500024f7();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),DAT_50082004);
    _DAT_5008200c = _DAT_5008200c + -1;
    if (_DAT_5008200c == 0) {
      _DAT_50082008 = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x18);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      this = (void *)FUN_5000c87a((void *)(unaff_EBP + -0x14));
      FUN_50004c13(this,iVar4,*(undefined4 *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),
                   *(int *)(unaff_EBP + 0x10),0,0);
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,*(undefined4 *)(unaff_EBP + -0x14));
      if (iVar4 < 0) {
        FUN_50012ca5(iVar4,piVar1,&DAT_50018368);
      }
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
    else {
      iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,piVar1,iVar4,*(undefined4 *)(unaff_EBP + 8));
      if (iVar4 < 0) {
        FUN_50012ca5(iVar4,piVar2,&DAT_500194f0);
      }
    }
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  piVar1[0x23] = (uint)piVar1[10] >> 1;
  piVar1[0x24] = (uint)piVar1[0xb] >> 1;
  uVar3 = 0;
LAB_5000bb5a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


