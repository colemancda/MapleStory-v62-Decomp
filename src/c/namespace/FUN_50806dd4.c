/* FUN_50806dd4 - 0x50806dd4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50806dd4(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_5080e090();
  iVar2 = FUN_50804e67();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_508053f3((void *)(unaff_EBP + 8),(int *)(unaff_EBP + -0x20));
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_5080dfed(iVar2);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  bVar1 = FUN_5080855a((void *)(unaff_EBP + 8),0);
  if (!bVar1) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_5080dfed(0x80004003);
    }
    piVar3 = (int *)FUN_508099ac(*(void **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x1c));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_50808ffa((void *)(unaff_EBP + -0x10),piVar3);
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_5080dfed(iVar2);
    }
    FUN_50808606((int *)(unaff_EBP + -0x1c));
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_50808606((int *)(unaff_EBP + -0x10));
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    uVar4 = 0;
  }
  else {
    Ordinal_8(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_5080dfed(0x80004003);
      }
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                        (*(int **)(unaff_EBP + -0x10),1,unaff_EBP + -0x3c,unaff_EBP + -0x24);
      if (iVar2 != 0) break;
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -0x4c) = DAT_5081ead8;
      *(undefined4 *)(unaff_EBP + -0x48) = DAT_5081eadc;
      *(undefined4 *)(unaff_EBP + -0x44) = DAT_5081eae0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x40) = DAT_5081eae4;
      if (puVar5 == (undefined4 *)0x0) {
        FUN_5080dfed(0x80004003);
        puVar5 = *(undefined4 **)(unaff_EBP + 8);
      }
      uVar6 = *puVar5;
      *(undefined4 **)(unaff_EBP + -0x28) = puVar5;
      iVar2 = unaff_EBP + -0x14;
      uVar4 = *(undefined4 *)(unaff_EBP + -0x4c);
      uVar8 = *(undefined4 *)(unaff_EBP + -0x48);
      uVar9 = *(undefined4 *)(unaff_EBP + -0x44);
      uVar10 = *(undefined4 *)(unaff_EBP + -0x40);
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
      uVar6 = FUN_50809878((void *)(unaff_EBP + -0x3c));
      (**(code **)(*(int *)(unaff_EBP + -0x2c) + 0x10))
                (*(undefined4 *)(unaff_EBP + -0x28),uVar6,uVar4,uVar8,uVar9,uVar10,iVar2);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      piVar7 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar3 + 0x1c))(piVar3,unaff_EBP + -0x1c);
        if (-1 < iVar2) {
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x1c);
        }
        piVar7 = *(int **)(unaff_EBP + -0x14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      iVar2 = FUN_508037a7((short *)(unaff_EBP + -0x3c));
      if (iVar2 < 0) {
        FUN_5080dfed(iVar2);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_508037a7((short *)(unaff_EBP + -0x3c));
    if (iVar2 < 0) {
      FUN_5080dfed(iVar2);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


