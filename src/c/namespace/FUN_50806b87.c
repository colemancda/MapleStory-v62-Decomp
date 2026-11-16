/* FUN_50806b87 - 0x50806b87 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined8 FUN_50806b87(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int unaff_EBP;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_5080e090();
  iVar5 = FUN_50804e67();
  *(int *)(unaff_EBP + -0x18) = iVar5;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (((iVar5 != 0) &&
      (iVar5 = FUN_508053f3((void *)(unaff_EBP + 8),(int *)(unaff_EBP + -0x18)), iVar5 < 0)) &&
     (iVar5 != -0x7fffbffe)) {
    FUN_5080dfed(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  bVar4 = FUN_5080855a((void *)(unaff_EBP + 8),0);
  if (!bVar4) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_5080dfed(0x80004003);
    }
    piVar6 = (int *)FUN_508099ac(*(void **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_50808ffa((void *)(unaff_EBP + -0x10),piVar6);
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      FUN_5080dfed(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_50808606((int *)(unaff_EBP + -0x14));
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_50808606((int *)(unaff_EBP + -0x10));
    FUN_50808606((int *)(unaff_EBP + 8));
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    Ordinal_8(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_5080dfed(0x80004003);
      }
      iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                        (*(int **)(unaff_EBP + -0x10),1,unaff_EBP + -0x48,unaff_EBP + -0x1c);
      if (iVar5 != 0) break;
      *(undefined4 *)(unaff_EBP + -0x58) = DAT_5081ead8;
      *(undefined4 *)(unaff_EBP + -0x54) = DAT_5081eadc;
      *(undefined4 *)(unaff_EBP + -0x50) = DAT_5081eae0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x4c) = DAT_5081eae4;
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_5080dfed(0x80004003);
      }
      puVar3 = *(undefined4 **)(unaff_EBP + 8);
      iVar5 = unaff_EBP + -0x14;
      uVar7 = *(undefined4 *)(unaff_EBP + -0x58);
      uVar9 = *(undefined4 *)(unaff_EBP + -0x54);
      uVar11 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar12 = *(undefined4 *)(unaff_EBP + -0x4c);
      *(undefined4 *)(unaff_EBP + -0x20) = *puVar3;
      uVar8 = FUN_50809878((void *)(unaff_EBP + -0x48));
      (**(code **)(*(int *)(unaff_EBP + -0x20) + 0x10))
                (puVar3,uVar8,uVar7,uVar9,uVar11,uVar12,iVar5);
      Ordinal_8(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      bVar4 = FUN_5080855a((void *)(unaff_EBP + -0x14),0);
      if (!bVar4) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_5080dfed(0x80004003);
        }
        iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x18))
                          (*(int **)(unaff_EBP + -0x14),unaff_EBP + -0x38);
        if (-1 < iVar5) {
          if (*(short *)(unaff_EBP + -0x38) == 3) {
            lVar10 = (longlong)*(int *)(unaff_EBP + -0x30);
          }
          else {
            if (*(short *)(unaff_EBP + -0x38) != 5) {
              FUN_50804f37((void *)(unaff_EBP + -0x38),5,(ushort *)0x0);
            }
            lVar10 = ftol();
          }
          puVar1 = (uint *)(unaff_EBP + -0x28);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + (uint)lVar10;
          *(int *)(unaff_EBP + -0x24) =
               *(int *)(unaff_EBP + -0x24) + (int)((ulonglong)lVar10 >> 0x20) +
               (uint)CARRY4(uVar2,(uint)lVar10);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x38));
      if (iVar5 < 0) {
        FUN_5080dfed(iVar5);
      }
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x48));
      if (iVar5 < 0) {
        FUN_5080dfed(iVar5);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x48));
    if (iVar5 < 0) {
      FUN_5080dfed(iVar5);
    }
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    piVar6 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    uVar7 = *(undefined4 *)(unaff_EBP + -0x28);
    uVar9 = *(undefined4 *)(unaff_EBP + -0x24);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return CONCAT44(uVar9,uVar7);
}


