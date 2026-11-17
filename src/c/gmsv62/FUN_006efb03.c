/* FUN_006efb03 - 0x006efb03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006efb03(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  undefined4 uVar6;
  int iStack_b8;
  int iStack_b4;
  int *piStack_b0;
  
  FUN_00879bb8();
  piStack_b0 = (int *)0x6efb20;
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_b0 = (int *)0x6efb33;
  puVar2 = (undefined4 *)FUN_00448dc6();
  piStack_b0 = (int *)0x6efb3d;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),(IBinding *)*puVar2)
  ;
  FUN_004125e6();
  uVar5 = *(uint *)(*(int *)(extraout_ECX + 0x558) + 0x38);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(uint *)(unaff_EBP + -0x18) = uVar5;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x1b;
  while (((iVar3 = *(int *)(*(int *)(extraout_ECX + 0x55c) + 0x578), iVar3 != 0 &&
          (uVar5 < *(uint *)(iVar3 + -4))) && (*(int *)(unaff_EBP + -0x24) < 5))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_b4 = unaff_EBP + -0x14;
    piStack_b0 = (int *)&DAT_0096b130;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_b8 = 0x6efbaa;
    FUN_00434e21();
    iStack_b4 = extraout_ECX + 0x54c;
    *(int ***)(unaff_EBP + -0x20) = &piStack_b0;
    iStack_b8 = 0x6efbc1;
    FUN_0046fcc9();
    iStack_b4 = unaff_EBP + -0x14;
    iStack_b8 = 0x6efbca;
    FUN_007d3a22();
    iStack_b4 = unaff_EBP + -0x1c;
    piStack_b0 = (int *)&DAT_0096477c;
    iStack_b8 = 0x6efbea;
    FUN_00434e21();
    piStack_b0 = (int *)0x6efbfc;
    FUN_006eff48();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_b0 = (int *)0x6efc18;
    iVar3 = FUN_0045ec92();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      piStack_b0 = (int *)0x6efc2e;
      FUN_00434e38();
    }
    if (iVar3 == 0) {
      piStack_b0 = (int *)0x6efda0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      piStack_b0 = (int *)(unaff_EBP + -0x58);
      iStack_b4 = 0x6efdaa;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efdb6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_b0 = (int *)0x6efdc0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      piStack_b0 = (int *)(unaff_EBP + -0x38);
      iStack_b4 = 0x6efdca;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efdd6;
        FUN_00878dfb();
      }
      piStack_b0 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_b4 = 0x6efded;
      iStack_b4 = FUN_00449749();
      iStack_b8 = 0x6efdf6;
      uVar4 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_b8;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar6 = 0xe;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004115d9(0xe,uVar4);
      FUN_00448e3a(uVar6,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_b0 = (int *)0x6efe27;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efe32;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_b0 = (int *)0x6efe3f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efe4a;
        FUN_00878dfb();
      }
      piStack_b0 = (int *)0x6efe50;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      piStack_b0 = (int *)(unaff_EBP + -0x68);
      iStack_b4 = 0x6efe5a;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efe66;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_b0 = (int *)0x6efe70;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_b0 = (int *)(unaff_EBP + -0x48);
      iStack_b4 = 0x6efe7a;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efe86;
        FUN_00878dfb();
      }
      piStack_b0 = (int *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_b4 = 0x6efe9d;
      iStack_b4 = FUN_00449749();
      iStack_b8 = 0x6efea6;
      uVar4 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_b8;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar6 = 0x5a;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_004115d9(0x5a,uVar4);
      FUN_00448e3a(uVar6,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_b0 = (int *)0x6efed7;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efee2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_b0 = (int *)0x6efc47;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + 8);
      piStack_b0 = (int *)0xd;
      iStack_b4 = 0x5f;
      iStack_b8 = *(int *)(unaff_EBP + -0x10) + -1;
      iVar3 = (**(code **)(*piVar1 + 0x8c))(piVar1,9);
      if (iVar3 < 0) {
        iStack_b8 = 0x6efc73;
        iStack_b4 = iVar3;
        piStack_b0 = piVar1;
        FUN_00878e09();
      }
      piStack_b0 = (int *)0x6efc7f;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_b0 = (int *)0x6efc8c;
      FUN_00403191();
      piStack_b0 = (int *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_b4 = 0x6efca8;
      iStack_b4 = FUN_00449749();
      iStack_b8 = 0x6efcb1;
      uVar4 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_b8;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar6 = 0xe;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004115d9(0xe,uVar4);
      FUN_00448e3a(uVar6,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_b0 = (int *)0x6efce2;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efced;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_b0 = (int *)0x6efcfd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efd08;
        FUN_00878dfb();
      }
      piStack_b0 = (int *)0x6efd14;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b0 = (int *)0x6efd24;
      FUN_00403191();
      piStack_b0 = (int *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_b4 = 0x6efd3d;
      iStack_b4 = FUN_00449749();
      iStack_b8 = 0x6efd46;
      uVar4 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_b8;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar6 = 0x5a;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_004115d9(0x5a,uVar4);
      FUN_00448e3a(uVar6,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b0 = (int *)0x6efd7a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_b0 = (int *)0x6efd85;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    piStack_b0 = (int *)0x6efeef;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_b0 = (int *)0x6efefa;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xd;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    uVar5 = *(uint *)(unaff_EBP + -0x18);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_b0 = (int *)0x6eff37;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


