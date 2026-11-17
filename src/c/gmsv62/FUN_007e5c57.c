/* FUN_007e5c57 - 0x007e5c57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e5c57(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int iVar7;
  int iStack_28;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(char **)(unaff_EBP + 0xc) == (char *)0x0) || (**(char **)(unaff_EBP + 0xc) == '\0')) {
    uVar5 = *(uint *)(unaff_EBP + 8);
    iVar2 = uVar5 * 0x3c;
    for (; (iVar7 = **(int **)(unaff_EBP + 0x14), iVar7 != 0 && (uVar5 < *(uint *)(iVar7 + -4)));
        uVar5 = uVar5 + 1) {
      piVar6 = (int *)(iVar2 + 8 + iVar7);
      *piVar6 = *piVar6 + 1;
      iVar2 = iVar2 + 0x3c;
    }
  }
  else {
    piVar6 = *(int **)(unaff_EBP + 0x14);
    iVar7 = *(int *)(unaff_EBP + 8) * 0x3c;
    iVar2 = iVar7 + *piVar6;
    *(int *)(unaff_EBP + -0x10) = iVar2 + 0x10;
    iStack_28 = 0x7e5cc4;
    FUN_00414f8b();
    iStack_28 = 0x7e5cd1;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_28 = 0x7e5ce1;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x10) = &iStack_28;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0044974c();
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_28 = 0x7e5d10;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x7e5d1b;
      FUN_00878dfb();
    }
    iStack_28 = 0x7e5d25;
    FUN_0045ee27();
    if ((*(char **)(unaff_EBP + 0x10) != (char *)0x0) && (**(char **)(unaff_EBP + 0x10) != '\0')) {
      iStack_28 = 0x7e5d45;
      puVar4 = (undefined4 *)FUN_007eec91();
      iVar7 = iVar7 + *piVar6;
      *puVar4 = 0;
      puVar4[2] = *(undefined4 *)(iVar7 + 8);
      iStack_28 = 0x7e5d60;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar4 + 3),
                 *(IBinding **)(iVar7 + 0xc));
      iStack_28 = 0x7e5d6c;
      FUN_00414f8b();
      puVar4[6] = 0;
      puVar4[7] = 0;
      iStack_28 = 0x7e5d7e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
      iStack_28 = unaff_EBP + -0x20;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_28 = 0x7e5d98;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_28 = 0x7e5da8;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x10) = &iStack_28;
      FUN_00448a17(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0044974c();
      uVar3 = FUN_00448ebb();
      puVar4[8] = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_28 = 0x7e5dd6;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_28 = 0x7e5de1;
        FUN_00878dfb();
      }
      if (*(int *)(iVar7 + 0xc) == 0) {
        iStack_28 = 0x7e5df0;
        FUN_00878dfb();
      }
      uVar3 = FUN_004a2734();
      piVar6 = *(int **)(unaff_EBP + 0x14);
      puVar4[9] = uVar3;
      uVar3 = *(undefined4 *)(iVar7 + 0x28);
      puVar4[0xb] = 0;
      puVar4[10] = uVar3;
      puVar4[0xc] = *(undefined4 *)(iVar7 + 0x30);
    }
    uVar5 = *(int *)(unaff_EBP + 8) + 1;
    iVar2 = uVar5 * 0x3c;
    for (; (iVar7 = *piVar6, iVar7 != 0 && (uVar5 < *(uint *)(iVar7 + -4))); uVar5 = uVar5 + 1) {
      piVar1 = (int *)(iVar2 + 8 + iVar7);
      *piVar1 = *piVar1 + 1;
      iVar2 = iVar2 + 0x3c;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


