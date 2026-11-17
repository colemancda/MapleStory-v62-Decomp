/* ptr_00545350 - 0x00545350 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00545350(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *in_EAX;
  int iVar6;
  undefined4 uVar7;
  int unaff_EBP;
  uint uVar8;
  code *unaff_EDI;
  undefined4 uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  do {
    uStack_10 = *in_EAX;
    uStack_14 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    uStack_18 = 0x545371;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00414ebb();
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x28) + 0x194) + 0x6c) < 2) {
      (*unaff_EDI)();
      uStack_10 = 0x5453ac;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      (*unaff_EDI)();
      uStack_10 = unaff_EBP - 0xd0;
      uStack_14 = 0x5453d2;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x5453de;
        FUN_00878dfb();
      }
      uStack_10 = unaff_EBP - 0xd0;
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      uStack_14 = 0x5453f8;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x545401;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar6 = *(int *)(unaff_EBP + -0x7c) + 0x165;
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      FUN_004115d9(iVar6,uVar7);
      FUN_00448e3a(iVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      uStack_10 = 0x54543c;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x545447;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
    }
    else {
      (*unaff_EDI)();
      uStack_10 = 0x54546c;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      (*unaff_EDI)();
      uStack_10 = unaff_EBP - 0xf0;
      uStack_14 = 0x545492;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x54549e;
        FUN_00878dfb();
      }
      uStack_10 = unaff_EBP - 0xf0;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      uStack_14 = 0x5454b8;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x5454c1;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar6 = *(int *)(unaff_EBP + -0x7c) + 0x1bc;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      FUN_004115d9(iVar6,uVar7);
      FUN_00448e3a(iVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      uStack_10 = 0x5454fc;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x545507;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
    }
    while( true ) {
      uStack_10 = 0x5459cb;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x5459d6;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      iVar6 = *(int *)(unaff_EBP + -0x28);
      if (*(int *)(iVar6 + 400) <= *(int *)(unaff_EBP + -0x24)) {
        iVar3 = *(int *)(iVar6 + 0x194);
        *(undefined4 *)(iVar6 + 0x690) = *(undefined4 *)(iVar3 + 0x68);
        *(undefined4 *)(iVar6 + 0x694) = *(undefined4 *)(iVar3 + 0x6c);
        *(undefined4 *)(iVar6 + 0x698) = *(undefined4 *)(iVar3 + 0x70);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          uStack_10 = 0x545a29;
          (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          uStack_10 = 0x545a3a;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          uStack_10 = 0x545a4b;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      piVar2 = *(int **)(unaff_EBP + -0x5c);
      uStack_10 = unaff_EBP - 0x7c;
      uStack_14 = 0x544dcf;
      FUN_00545b91();
      iVar3 = *piVar2 + *(int *)(unaff_EBP + -0x24) * 8;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x78) + 3;
      if (*(int *)(*(int *)(iVar6 + 0x194) + 0x68) == 4) break;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
      FUN_0045e2eb();
      uStack_10 = unaff_EBP - 0x9c;
      uStack_14 = 0x54553d;
      FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      uStack_10 = 0x54554a;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00414ebb();
      uStack_14 = unaff_EBP + -0x20;
      *(uint **)(unaff_EBP + -0x1c) = &uStack_10;
      uStack_18 = 0x54556d;
      FUN_0046fcc9();
      uStack_14 = unaff_EBP + 8;
      uStack_18 = 0x545576;
      FUN_007d3a22();
      uStack_10 = 0x545586;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x150));
      uStack_10 = unaff_EBP - 0x150;
      uStack_14 = 0x545593;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        uStack_10 = 0x54559f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      uStack_10 = 0x5455b0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x110));
      uStack_10 = unaff_EBP - 0x110;
      uStack_14 = 0x5455bd;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        uStack_10 = 0x5455c9;
        FUN_00878dfb();
      }
      uStack_10 = unaff_EBP - 0x110;
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      uStack_14 = 0x5455e3;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x5455ec;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar4 = *(int *)(unaff_EBP + -0x7c) + 0xb;
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      FUN_004115d9(iVar4,uVar7);
      FUN_00448e3a(iVar4,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      uStack_10 = 0x545625;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_10 = 0x545630;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      uStack_10 = 0x545640;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_10 = 0x54564b;
        FUN_00878dfb();
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x194) + 0x68);
      if (iVar6 == 1) {
        uStack_10 = *(int *)(*(int *)(iVar3 + 4) + 0xfc) + *(int *)(*(int *)(iVar3 + 4) + 0x24);
      }
      else {
        iVar4 = *(int *)(iVar3 + 4);
        if (iVar6 == 3) {
          uStack_10 = *(int *)(iVar4 + 0xfc) + *(int *)(iVar4 + 0x10);
        }
        else {
          uStack_10 = *(uint *)(iVar4 + 0x24);
        }
      }
      uStack_14 = unaff_EBP + 8;
      uStack_18 = 0x54568b;
      FUN_007d3546();
      iVar6 = (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x18) + 0x18))();
      if (1 < iVar6) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        piVar2 = *(int **)(*(int *)(iVar3 + 4) + 0x18);
        uStack_10 = unaff_EBP - 0x94;
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        uStack_14 = 0x5456c2;
        puVar5 = (undefined4 *)FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x1c) = *puVar5;
        iVar6 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        (**(code **)(iVar6 + 0x18))();
        uStack_10 = *(uint *)(unaff_EBP + -0x1c);
        uStack_14 = unaff_EBP + -0x10;
        uStack_18 = 0x5456df;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        FUN_00414ebb();
        uStack_10 = *(uint *)(unaff_EBP + -0x10);
        uStack_14 = 0x545709;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00414ebb();
      }
      uStack_10 = 0x545724;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x170));
      uStack_10 = unaff_EBP - 0x170;
      uStack_14 = 0x545731;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x54573d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      uStack_10 = 0x54574a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x130));
      uStack_10 = unaff_EBP - 0x130;
      uStack_14 = 0x545757;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x545763;
        FUN_00878dfb();
      }
      uStack_10 = unaff_EBP - 0x130;
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      uStack_14 = 0x54577d;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x545786;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar6 = *(int *)(unaff_EBP + -0x7c) + 0x17a;
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_004115d9(iVar6,uVar7);
      FUN_00448e3a(iVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      uStack_10 = 0x5457c1;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x5457cc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      uStack_10 = 0x5457dc;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x5457e7;
        FUN_00878dfb();
      }
      uStack_10 = *(int *)(iVar3 + 4) + 0x66;
      uStack_14 = 0x5457f8;
      FUN_00414edd();
      uStack_10 = 0x545801;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
      uStack_10 = unaff_EBP - 0xc0;
      uStack_14 = 0x54580e;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x54581a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      uStack_10 = 0x545827;
      VariantInit((VARIANTARG *)(unaff_EBP + -400));
      uStack_10 = unaff_EBP - 400;
      uStack_14 = 0x545834;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x545840;
        FUN_00878dfb();
      }
      uStack_10 = unaff_EBP - 400;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      uStack_14 = 0x54585a;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x545863;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar6 = *(int *)(unaff_EBP + -0x7c) + 0x125;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      FUN_004115d9(iVar6,uVar7);
      FUN_00448e3a(iVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      uStack_10 = 0x54589e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x5458a9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      uStack_10 = 0x5458b9;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x5458c4;
        FUN_00878dfb();
      }
      uStack_10 = *(int *)(iVar3 + 4) + 0x2c;
      uStack_14 = 0x5458d8;
      (*DAT_0097b4b0)();
      uStack_10 = unaff_EBP - 0x30;
      uStack_14 = 0x5458eb;
      puVar5 = (undefined4 *)FUN_00679d22();
      uStack_18 = *puVar5;
      uStack_10 = (uint)*(ushort *)(unaff_EBP + -0x8a);
      uStack_14 = (uint)*(ushort *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      FUN_00434e21(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00414ebb();
      uStack_10 = 0x545928;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      uStack_10 = unaff_EBP - 0x40;
      uStack_14 = 0x545932;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x54593e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      uStack_10 = 0x545948;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      uStack_10 = unaff_EBP - 0x50;
      uStack_14 = 0x545952;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        uStack_10 = 0x54595e;
        FUN_00878dfb();
      }
      uStack_10 = unaff_EBP - 0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      uStack_14 = 0x545972;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x54597b;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar6 = *(int *)(unaff_EBP + -0x7c) + 0x1bb;
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      FUN_004115d9(iVar6,uVar7);
      FUN_00448e3a(iVar6,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      uStack_10 = 0x5459b3;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_10 = 0x5459be;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x194) + 0x6c);
    if (iVar4 == 2) {
      uStack_10 = unaff_EBP - 0x54;
      uStack_14 = 0x544e0f;
      FUN_00545abf();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      uStack_10 = 0x544e1c;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (*(int *)(unaff_EBP + -0x54) != 0) {
        uStack_10 = 0x544e30;
        FUN_00434e38();
      }
      uStack_10 = 0x544e3d;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      uStack_10 = 0x544e4d;
      FUN_00403191();
      uStack_10 = unaff_EBP - 0x1a0;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      uStack_14 = 0x544e67;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x544e70;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar4 = *(int *)(unaff_EBP + -0x7c) + 5;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_004115d9(iVar4,uVar7);
      FUN_00448e3a(iVar4,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      uStack_10 = 0x544ea9;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_10 = 0x544eb4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
LAB_00544f85:
      uStack_10 = 0x544f8b;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_10 = 0x544f96;
        FUN_00878dfb();
      }
    }
    else if (iVar4 == 3) {
      uStack_10 = unaff_EBP - 0x58;
      uStack_14 = 0x544edf;
      FUN_00545b0d();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      uStack_10 = 0x544eec;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00414ebb();
      uStack_10 = 0x544f04;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      uStack_10 = 0x544f14;
      FUN_00403191();
      uStack_10 = unaff_EBP - 0x1d0;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uStack_14 = 0x544f2e;
      uStack_14 = FUN_00449749();
      uStack_18 = 0x544f37;
      uVar7 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      iVar4 = *(int *)(unaff_EBP + -0x7c) + 5;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_004115d9(iVar4,uVar7);
      FUN_00448e3a(iVar4,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      uStack_10 = 0x544f70;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_10 = 0x544f7b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      goto LAB_00544f85;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = DAT_00973a94;
    FUN_0045e2eb();
    uStack_10 = unaff_EBP - 0x90;
    uStack_14 = 0x544fbd;
    FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    uStack_10 = 0x544fca;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00414ebb();
    uStack_14 = unaff_EBP + -0x20;
    *(uint **)(unaff_EBP + -0x1c) = &uStack_10;
    uStack_18 = 0x544fea;
    FUN_0046fcc9();
    uStack_14 = unaff_EBP + 8;
    uStack_18 = 0x544ff3;
    FUN_007d3a22();
    iVar6 = *(int *)(*(int *)(iVar6 + 0x194) + 0x6c);
    if (iVar6 == 2) {
      iVar6 = *(int *)(iVar3 + 4);
      sVar1 = *(short *)(iVar6 + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x10) = 0x47;
      if (sVar1 == 0) {
        uVar8 = *(uint *)(iVar6 + 0x24);
      }
      else {
LAB_0054503e:
        uVar8 = *(int *)(iVar6 + 0xfc) + *(int *)(iVar6 + 0x24);
      }
    }
    else {
      if (iVar6 != 3) {
        iVar6 = *(int *)(iVar3 + 4);
        *(undefined4 *)(unaff_EBP + -0x10) = 10;
        goto LAB_0054503e;
      }
      uVar8 = *(int *)(*(int *)(iVar3 + 4) + 0xfc) + *(int *)(*(int *)(iVar3 + 4) + 0x10);
      *(undefined4 *)(unaff_EBP + -0x10) = 0x47;
    }
    uStack_10 = 0x545050;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    uStack_10 = 0x545060;
    FUN_00403191();
    uStack_10 = unaff_EBP - 0x1c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    uStack_14 = 0x545077;
    uStack_14 = FUN_00449749();
    uStack_18 = 0x545080;
    uVar7 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18;
    FUN_00448a17(uVar7);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
    iVar6 = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_004115d9(iVar6,uVar7);
    FUN_00448e3a(iVar6,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    uStack_10 = 0x5450bb;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_10 = 0x5450c6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    uStack_10 = 0x5450d3;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_10 = 0x5450de;
      FUN_00878dfb();
    }
    uStack_14 = unaff_EBP + 8;
    uStack_18 = 0x5450ea;
    uStack_10 = uVar8;
    FUN_007d3546();
    iVar6 = (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x18) + 0x18))();
    if (1 < iVar6) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piVar2 = *(int **)(*(int *)(iVar3 + 4) + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      puVar5 = (undefined4 *)FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x1c) = *puVar5;
      iVar6 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      (**(code **)(iVar6 + 0x18))();
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_00414ebb();
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00414ebb();
    }
    unaff_EDI = VariantInit_exref;
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x28) + 0x194) + 0x6c) < 2) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x100));
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      FUN_00449749();
      FUN_00449713();
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffff8;
      uStack_10 = 0x545204;
      FUN_00448a17();
      uStack_10 = *(int *)(unaff_EBP + -0x7c) + 0x126;
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      uStack_14 = 0x54521c;
      FUN_004115d9();
      uStack_14 = 0x545223;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
    }
    else {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x120));
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00449749();
      FUN_00449713();
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffff8;
      uStack_10 = 0x5452ca;
      FUN_00448a17();
      uStack_10 = *(int *)(unaff_EBP + -0x7c) + 0x17c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      uStack_14 = 0x5452e2;
      FUN_004115d9();
      uStack_14 = 0x5452e9;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
    }
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    (*DAT_0097b4b0)();
    in_EAX = (uint *)FUN_00679d22();
  } while( true );
}


