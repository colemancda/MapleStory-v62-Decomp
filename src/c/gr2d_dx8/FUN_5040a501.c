/* FUN_5040a501 - 0x5040a501 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040a501(void)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(short *)(unaff_EBP + 0xc) != 0) && (*(short *)(unaff_EBP + 0xc) != 10)) {
    Ordinal_8();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_5040638a((void *)(unaff_EBP + -0x30),0xd,(ushort *)(unaff_EBP + 0xc));
    iVar4 = FUN_504060e1((void *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x28));
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      FUN_5042a358(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x30));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      FUN_50404f4f((int *)(unaff_EBP + -0x18));
LAB_5040a657:
      FUN_5040a73b();
      return;
    }
    iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x30));
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
  }
  puVar6 = *(undefined4 **)(unaff_EBP + 8);
  puVar1 = puVar6 + 7;
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
  FUN_50401895();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffcc;
  FUN_5040c154((int *)&stack0xffffffcc);
  bVar3 = FUN_5040c648();
  if (bVar3) {
    piVar2 = puVar6 + 8;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    FUN_50404f4f((int *)(unaff_EBP + -0x18));
  }
  else {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar6 + 0xc),
               *(IBinding **)(unaff_EBP + -0x18));
    piVar2 = puVar6 + 8;
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      *puVar1 = 0;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x18);
      FUN_5040c154((int *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        do {
          if ((*(undefined4 **)(unaff_EBP + -0x14) == puVar6) ||
             (iVar4 = FUN_5040c69e((void *)(unaff_EBP + -0x14),puVar6), iVar4 == 0)) {
            *(undefined1 *)(unaff_EBP + -4) = 1;
            if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
            }
            goto LAB_5040a657;
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_5042a358(0x80004003);
          }
          FUN_5040d283(*(void **)(unaff_EBP + -0x14),(void *)(unaff_EBP + -0x30));
          *(undefined1 *)(unaff_EBP + -4) = 5;
          uVar5 = FUN_504062ba();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
          iVar4 = FUN_504060e1((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x1c));
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            FUN_5042a358(iVar4);
          }
          bVar3 = FUN_50405008((void *)(unaff_EBP + -0x14),0);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x30));
          if (iVar4 < 0) {
            FUN_5042a358(iVar4);
          }
          puVar6 = *(undefined4 **)(unaff_EBP + 8);
        } while (!bVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    FUN_50409f3b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
  }
  FUN_5040a73b();
  return;
}


