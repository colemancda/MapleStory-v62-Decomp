/* FUN_00755feb - 0x00755feb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00755feb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar7;
  undefined1 *puStack_48;
  int *piStack_44;
  
  FUN_00879bb8();
  if (((*(int *)(extraout_ECX + 0x10) == 0) ||
      (*(int *)(extraout_ECX + 0x14) != *(int *)(unaff_EBP + 8))) ||
     (*(int *)(extraout_ECX + 0x18) != *(int *)(unaff_EBP + 0xc))) {
    iVar3 = **(int **)(unaff_EBP + 0x10) / 10000;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if ((iVar3 % 100 != 0) && (iVar3 % 10 == 2)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    }
    piStack_44 = (int *)(unaff_EBP + -0x10);
    puStack_48 = (undefined1 *)0x756055;
    FUN_00756efd();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_44 = (int *)0x756062;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_44 = (int *)(unaff_EBP + -0x3c);
    puStack_48 = (undefined1 *)0x756070;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_44 = (int *)0x75607c;
      FUN_00878dfb();
    }
    piStack_44 = (int *)0xda;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_48 = (undefined1 *)0x756094;
    uVar4 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_48;
    FUN_00448a17(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0044974c();
    iVar3 = FUN_007538c7();
    *(int *)(unaff_EBP + -0x14) = iVar3 + -4;
    if (iVar3 + -4 < 1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_44 = (int *)0x7560cd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_44 = (int *)0x7560d8;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + 0x10) + 0x3c);
    *(int *)(unaff_EBP + -0x24) = iVar3;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_44 = (int *)0x7560f0;
      FUN_00878dfb();
    }
    iVar5 = FUN_004a2734();
    iVar1 = *(int *)(unaff_EBP + -0x24);
    iVar2 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_44 = (int *)0x756126;
      FUN_00878dfb();
    }
    FUN_004a2734();
    piStack_44 = (int *)((-(uint)(iVar3 != 0) & iVar1 * 0x22 + 0x14U) + (iVar5 + 4) * iVar2 + 0x80);
    puStack_48 = (undefined1 *)0x140;
    FUN_0074d72a(7);
    piStack_44 = (int *)0x756159;
    iVar3 = FUN_00455c59();
    puStack_48 = *(undefined1 **)(iVar3 + 4);
    piStack_44 = (int *)**(undefined4 **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar4 = FUN_00650dae();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      piStack_44 = (int *)0x75618c;
      FUN_0045e7c2();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + 0x14) != 0) {
      if (0 < *(int *)(unaff_EBP + -0x14)) {
        piStack_44 = (int *)(unaff_EBP + -0x28);
        puStack_48 = (undefined1 *)0x7561c0;
        puVar6 = (undefined4 *)FUN_00679d22();
        piStack_44 = (int *)*puVar6;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_48 = (undefined1 *)(unaff_EBP + -0x18);
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414ebb();
        piStack_44 = (int *)0x1;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_48;
        FUN_00450368(unaff_EBP + -0x18);
        FUN_00757015(0x10);
        piStack_44 = (int *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_48;
        uVar7 = 0xffffffff;
        puStack_48 = extraout_ECX_00;
        FUN_006509a1(*(undefined4 *)(unaff_EBP + -0x14));
        uVar4 = FUN_00615dd8(uVar7);
        FUN_0045f0f3(uVar4,uVar7);
        FUN_00757015(0x11);
      }
      iVar3 = FUN_00650e14();
      if (*(int *)(unaff_EBP + -0x14) < iVar3) {
        piStack_44 = (int *)(unaff_EBP + -0x28);
        puStack_48 = (undefined1 *)0x756251;
        puVar6 = (undefined4 *)FUN_00679d22();
        piStack_44 = (int *)*puVar6;
        puStack_48 = (undefined1 *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414ebb();
        piStack_44 = (int *)0x1;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_48;
        FUN_00450368(unaff_EBP + -0x18);
        FUN_00757015(0x10);
        piStack_44 = (int *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_48;
        uVar7 = 0xffffffff;
        FUN_006509a1(*(undefined4 *)(unaff_EBP + -0x14));
        uVar4 = FUN_00615dd8(uVar7);
        FUN_0045f0f3(uVar4,uVar7);
        FUN_00757015(0x11);
      }
    }
    piStack_44 = (int *)0x0;
    puStack_48 = (undefined1 *)0x1;
    FUN_0075699b(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      piStack_44 = (int *)0x7562e5;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    puStack_48 = &stack0xffffffc0;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffc0;
    piStack_44 = (int *)0x1;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_44 = (int *)0x756304;
    piStack_44 = (int *)FUN_00449713();
    puStack_48 = (undefined1 *)0xa;
    FUN_00758757();
    piStack_44 = *(int **)(*(int *)(unaff_EBP + 0x10) + 0x90);
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffc0;
    if (piStack_44 != (int *)0x0) {
      puStack_48 = (undefined1 *)0x756329;
      (**(code **)(*piStack_44 + 4))();
    }
    piStack_44 = (int *)0x20;
    puStack_48 = (undefined1 *)0xa;
    FUN_00757b97();
    *(undefined4 *)(unaff_EBP + -0x14) = 0x20;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_44 = (int *)0x756353;
      iVar3 = FUN_00455c59();
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piStack_44 = (int *)0x756367;
        FUN_0045e7c2();
      }
      piStack_44 = *(int **)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      puStack_48 = (undefined1 *)0x756382;
      FUN_004b8f25();
      *(undefined4 *)(unaff_EBP + 8) = 0;
      piStack_44 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_48 = (undefined1 *)0x756399;
      puVar6 = (undefined4 *)FUN_00679d22();
      piStack_44 = (int *)*puVar6;
      puStack_48 = (undefined1 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00414ebb();
      if ((*(int *)(unaff_EBP + 0xc) == 0) && (*(int *)(unaff_EBP + 0x14) == 0)) {
        iVar3 = *(int *)(unaff_EBP + -0x1c);
      }
      else {
        piStack_44 = (int *)0x1;
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_48;
        puStack_48 = extraout_ECX_01;
        FUN_00756efd(&puStack_48,7);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uVar4 = FUN_00449713();
        FUN_00757d85(0x57,*(int *)(extraout_ECX + 0xc) + -0x14,0x20,uVar4);
        iVar3 = 0xf;
      }
      *(int *)(unaff_EBP + -0x14) = iVar3 + 0x20;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
    }
    piStack_44 = (int *)0x1;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_48;
    FUN_00756efd(&puStack_48,7);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar4 = FUN_00449713();
    FUN_00757d85(0x57,*(int *)(extraout_ECX + 0xc) + -0x14,*(undefined4 *)(unaff_EBP + -0x14),uVar4)
    ;
    if (*(int *)(unaff_EBP + 0x14) != 0) {
      piStack_44 = (int *)0x756454;
      FUN_00757413();
    }
    piStack_44 = *(int **)(unaff_EBP + -0x24);
    puStack_48 = (undefined1 *)0x756461;
    FUN_0075648f();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_44 = (int *)0x75647e;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


