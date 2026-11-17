/* FUN_0051ffd1 - 0x0051ffd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051ffd1(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uStack_260;
  int iStack_25c;
  int iStack_258;
  undefined4 uStack_238;
  undefined4 *puStack_234;
  int *piStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 *puStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  int iStack_214;
  int iStack_210;
  int *piStack_20c;
  int *piStack_208;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x98);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 1) {
    if (*(int *)(extraout_ECX + 0x90) == 0) {
      piStack_208 = (int *)0x80004003;
      piStack_20c = (int *)0x520af3;
      FUN_00878dfb();
    }
    piStack_20c = *(int **)(extraout_ECX + 0x90);
    iStack_210 = 0x520b05;
    piStack_208 = (int *)(extraout_ECX + 0x9c);
    (**(code **)(*piStack_20c + 0x114))();
    if (*(int *)(extraout_ECX + 0x9c) == 0) {
      *(undefined4 *)(extraout_ECX + 0x98) = 2;
    }
  }
  else if (iVar2 == 2) {
    *(int *)(extraout_ECX + 0xa0) = *(int *)(extraout_ECX + 0xa0) + -0x1e;
    if (*(int *)(extraout_ECX + 0xa0) < 1) {
      piStack_208 = &DAT_00980690;
      piStack_20c = (int *)0x5200e8;
      FUN_00403191();
      piStack_208 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_20c = (int *)0x5200f8;
      FUN_00403191();
      piStack_208 = (int *)0x0;
      piStack_20c = (int *)0x0;
      iStack_210 = unaff_EBP + -0x94;
      iStack_214 = unaff_EBP + -0x1b4;
      puStack_220 = (undefined1 *)&uStack_218;
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_218;
      iStack_21c = 0x829;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_224 = 0x520124;
      FUN_00679e4e();
      iStack_21c = unaff_EBP + -500;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_220 = (undefined1 *)0x520134;
      FUN_00405a1d();
      puStack_220 = (undefined1 *)0x52013b;
      FUN_00402660();
      puStack_220 = (undefined1 *)0x520142;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_210 = 0x52014d;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (iVar2 != 0) {
        piStack_208 = (int *)(unaff_EBP + -0x40);
        piStack_20c = (int *)0x520163;
        piStack_208 = (int *)FUN_0041a581();
        if (((int)piStack_208 < 0) && (piStack_208 != (int *)0x80004002)) {
          piStack_20c = (int *)0x520174;
          FUN_00878dfb();
        }
      }
      piStack_208 = (int *)(unaff_EBP + -500);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_20c = (int *)0x520184;
      piStack_208 = (int *)FUN_00402bc3();
      if ((int)piStack_208 < 0) {
        piStack_20c = (int *)0x52018f;
        FUN_00878dfb();
      }
      piStack_208 = (int *)(unaff_EBP + -0x1b4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_20c = (int *)0x52019f;
      piStack_208 = (int *)FUN_00402bc3();
      if ((int)piStack_208 < 0) {
        piStack_20c = (int *)0x5201aa;
        FUN_00878dfb();
      }
      piStack_208 = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_20c = (int *)0x5201ba;
      piStack_208 = (int *)FUN_00402bc3();
      if ((int)piStack_208 < 0) {
        piStack_20c = (int *)0x5201c5;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piStack_208 = (int *)0x3af;
      piStack_20c = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_210 = 0x5201dc;
      puVar3 = (undefined4 *)FUN_00679d86();
      iStack_210 = *puVar3;
      piStack_208 = (int *)0x0;
      piStack_20c = (int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_214 = 0x5201ed;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        piStack_208 = (int *)(*(int *)(unaff_EBP + -0x44) + -0xc);
        piStack_20c = (int *)0x520204;
        FUN_00403384();
      }
      piStack_208 = &DAT_00980690;
      piStack_20c = (int *)0x520211;
      FUN_00403191();
      piStack_208 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_20c = (int *)0x520221;
      FUN_00403191();
      piStack_230 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (piStack_230 == (int *)0x0) {
        piStack_208 = (int *)0x80004003;
        piStack_20c = (int *)0x520236;
        FUN_00878dfb();
        piStack_230 = *(int **)(unaff_EBP + -0x10);
      }
      iStack_214 = *(undefined4 *)(unaff_EBP + -0xb4);
      iStack_210 = *(int *)(unaff_EBP + -0xb0);
      iVar2 = *piStack_230;
      piStack_20c = *(int **)(unaff_EBP + -0xac);
      piStack_208 = *(int **)(unaff_EBP + -0xa8);
      uStack_224 = *(undefined4 *)(unaff_EBP + -0x154);
      puStack_220 = *(undefined1 **)(unaff_EBP + -0x150);
      uStack_228 = 0x13a;
      iStack_21c = *(undefined4 *)(unaff_EBP + -0x14c);
      uStack_22c = 0xfa;
      *(int **)(unaff_EBP + -0x1c) = piStack_230;
      uStack_218 = *(undefined4 *)(unaff_EBP + -0x148);
      puStack_234 = (undefined4 *)0x52026a;
      iVar2 = (**(code **)(iVar2 + 0x2c))();
      if (iVar2 < 0) {
        puStack_234 = (undefined4 *)&DAT_00963cc8;
        uStack_238 = *(undefined4 *)(unaff_EBP + -0x1c);
        FUN_00878e09();
      }
      puStack_234 = (undefined4 *)(unaff_EBP + -0x154);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_238 = 0x52028c;
      puStack_234 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_234 < 0) {
        uStack_238 = 0x520297;
        FUN_00878dfb();
      }
      puStack_234 = (undefined4 *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_238 = 0x5202a7;
      puStack_234 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_234 < 0) {
        uStack_238 = 0x5202b2;
        FUN_00878dfb();
      }
      puStack_234 = &DAT_00980690;
      uStack_238 = 0x5202bb;
      FUN_00403191();
      puStack_234 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_238 = 0x5202ce;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_238;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_0044974c();
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      puStack_234 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_238 = 0x520302;
      puStack_234 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_234 < 0) {
        uStack_238 = 0x52030d;
        FUN_00878dfb();
      }
      puStack_234 = &DAT_00980690;
      uStack_238 = 0x520319;
      FUN_00403191();
      puStack_234 = (undefined4 *)(unaff_EBP + -0xd4);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_238 = 0x52032c;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_238;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_0044974c();
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      puStack_234 = (undefined4 *)(unaff_EBP + -0xd4);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_238 = 0x52035d;
      puStack_234 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_234 < 0) {
        uStack_238 = 0x520368;
        FUN_00878dfb();
      }
      puStack_234 = &DAT_00980690;
      uStack_238 = 0x520374;
      FUN_00403191();
      piVar6 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (piVar6 == (int *)0x0) {
        puStack_234 = (undefined4 *)0x80004003;
        uStack_238 = 0x520389;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar6;
      uStack_238 = *(undefined4 *)(unaff_EBP + -0x16c);
      *(int **)(unaff_EBP + -0x1c) = piVar6;
      puStack_234 = *(undefined4 **)(unaff_EBP + -0x168);
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        iStack_258 = *(undefined4 *)(unaff_EBP + -0x1c);
        uStack_260 = 0x5203c0;
        iStack_25c = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_258 = 0x5203d0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_258 = 0x5203db;
        FUN_00878dfb();
      }
      iStack_258 = 0x5203e7;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_258 = 0x5203f7;
      FUN_00403191();
      iVar2 = *(int *)(unaff_EBP + -0x18);
      iStack_258 = unaff_EBP + -0xf4;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_25c = 0x520419;
      iStack_25c = FUN_00449749();
      uStack_260 = 0x520422;
      uVar4 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_260;
      FUN_00448a17(uVar4);
      iVar5 = 0x69 - *(int *)(unaff_EBP + -0x20);
      uVar4 = 0x29;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      *(int *)(unaff_EBP + -0x20) = iVar5;
      FUN_004115d9(iVar5,0x29);
      FUN_00448e3a(iVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_258 = 0x52045d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x520468;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_258 = 0x520478;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x520483;
        FUN_00878dfb();
      }
      iStack_258 = 0x52048f;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_258 = 0x52049f;
      FUN_00403191();
      iStack_258 = unaff_EBP + -0x114;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_25c = 0x5204b8;
      iStack_25c = FUN_00449749();
      uStack_260 = 0x5204c1;
      uVar4 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_260;
      FUN_00448a17(uVar4);
      iVar5 = 0x69 - *(int *)(unaff_EBP + -0x14);
      uVar4 = 0x4f;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      *(int *)(unaff_EBP + -0x14) = iVar5;
      FUN_004115d9(iVar5,0x4f);
      FUN_00448e3a(iVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_258 = 0x5204fc;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x520507;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_258 = 0x520517;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x520522;
        FUN_00878dfb();
      }
      iStack_258 = 0x52052e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_258 = 0x52053e;
      FUN_00403191();
      iStack_258 = unaff_EBP + -0x134;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_25c = 0x520557;
      iStack_25c = FUN_00449749();
      uStack_260 = 0x520560;
      uVar4 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_260;
      FUN_00448a17(uVar4);
      uVar8 = 0x6e;
      uVar4 = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_004115d9(uVar4,0x6e);
      FUN_00448e3a(uVar4,uVar8);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_258 = 0x520594;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x52059f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_258 = 0x5205af;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x5205ba;
        FUN_00878dfb();
      }
      iStack_258 = 0x5205c6;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_258 = 0x5205d6;
      FUN_00403191();
      iStack_258 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_25c = 0x5205ef;
      iStack_25c = FUN_00449749();
      uStack_260 = 0x5205f8;
      uVar4 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_260;
      FUN_00448a17(uVar4);
      uVar8 = 0x94;
      uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_004115d9(uVar4,0x94);
      FUN_00448e3a(uVar4,uVar8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_258 = 0x52062f;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x52063a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_258 = 0x52064a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_258 = 0x520657;
        FUN_00878dfb();
      }
      iStack_258 = 0x520663;
      FUN_00403191();
      iStack_258 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_25c = 0x520675;
      FUN_004031b7();
      bVar7 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (bVar7) {
        iStack_258 = 0x52068b;
        FUN_00878dfb();
      }
      iStack_258 = unaff_EBP + -0xc4;
      iStack_25c = 0;
      uStack_260 = 0x13a;
      puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x38,0x1f,0x33,0xfa);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0x94);
      iStack_258 = 0x5206c6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
      if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
        iStack_258 = 0x5206d3;
        (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_258 = 0x5206e3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_258 = 0x5206ee;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_258 = 0x5206fe;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_258 = 0x520709;
        FUN_00878dfb();
      }
      iStack_258 = 0x520714;
      puVar3 = (undefined4 *)FUN_004489f5();
      iStack_258 = *puVar3;
      iStack_25c = 0x520724;
      FUN_0040ee87();
      iVar2 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (iVar2 == 0) {
        iStack_258 = 0x520737;
        FUN_00878dfb();
      }
      uStack_260 = *(undefined4 *)(unaff_EBP + -0x104);
      iStack_25c = *(int *)(unaff_EBP + -0x100);
      piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x94);
      iVar2 = *piVar6;
      iStack_258 = *(undefined4 *)(unaff_EBP + -0xfc);
      *(int **)(unaff_EBP + -0x14) = piVar6;
      iVar2 = (**(code **)(iVar2 + 100))(piVar6);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x104);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      piVar6 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      iVar2 = *(int *)(unaff_EBP + -0x18);
      puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x2c);
      FUN_0040ee87(*puVar3,1);
      iVar2 = *(int *)(iVar2 + 0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x94);
      iVar2 = *piVar6;
      *(int **)(unaff_EBP + -0x14) = piVar6;
      iVar2 = (**(code **)(iVar2 + 0xfc))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x124),
                         *(undefined4 *)(unaff_EBP + -0x120),*(undefined4 *)(unaff_EBP + -0x11c),
                         *(undefined4 *)(unaff_EBP + -0x118));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x124);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      piVar6 = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      piVar6 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x94);
      if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x94) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)*piVar6;
      iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffff);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      iVar2 = FUN_00402e32(unaff_EBP + -0x54,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_00403191(&DAT_00980690);
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x204,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x144,
                   unaff_EBP + -0x164,unaff_EBP + -0x184,unaff_EBP + -0x1a4,unaff_EBP + -0x54);
      iVar2 = FUN_00402bc3(unaff_EBP + -0x204);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x144);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x164);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x184);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x1a4);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -100));
      iVar2 = FUN_00402e32(unaff_EBP + -100,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_0042a378();
      FUN_004031b7(iVar2 + 1000,3);
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)FUN_004113e5(unaff_EBP + -0x34);
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)*piVar6;
      iVar2 = (**(code **)(*piVar6 + 0x90))
                        (piVar6,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x1c4),
                         *(undefined4 *)(unaff_EBP + -0x1c0),*(undefined4 *)(unaff_EBP + -0x1bc),
                         *(undefined4 *)(unaff_EBP + -0x1b8),*(undefined4 *)(unaff_EBP + -100),
                         *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58));
      if (iVar2 < 0) {
        piStack_208 = (int *)&DAT_00963de8;
        iStack_214 = 0x520a66;
        iStack_210 = iVar2;
        piStack_20c = piVar6;
        FUN_00878e09();
      }
      piStack_208 = *(int **)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (piStack_208 != (int *)0x0) {
        piStack_20c = (int *)0x520a77;
        (**(code **)(*piStack_208 + 8))();
      }
      piStack_208 = (int *)(unaff_EBP + -0x1c4);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      piStack_20c = (int *)0x520a87;
      piStack_208 = (int *)FUN_00402bc3();
      if ((int)piStack_208 < 0) {
        piStack_20c = (int *)0x520a92;
        FUN_00878dfb();
      }
      piStack_208 = (int *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_20c = (int *)0x520a9f;
      piStack_208 = (int *)FUN_00402bc3();
      if ((int)piStack_208 < 0) {
        piStack_20c = (int *)0x520aaa;
        FUN_00878dfb();
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x98) = 3;
      piStack_208 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piStack_208 != (int *)0x0) {
        piStack_20c = (int *)0x520ac8;
        (**(code **)(*piStack_208 + 8))();
      }
      piStack_208 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_208 != (int *)0x0) {
        piStack_20c = (int *)0x520ad9;
        (**(code **)(*piStack_208 + 8))();
      }
    }
  }
  else {
    if (iVar2 == 3) {
      *(int *)(extraout_ECX + 0xa4) = *(int *)(extraout_ECX + 0xa4) + -0x1e;
      if (*(int *)(extraout_ECX + 0xa4) < 1) {
        *(undefined4 *)(extraout_ECX + 0x98) = 4;
        piStack_208 = (int *)0x1;
        piStack_20c = (int *)0x52003e;
        (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x24))();
        piStack_20c = (int *)0x1;
        iStack_210 = 0x52004e;
        (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x88) + 4) + 0x24))();
        *(undefined4 *)(extraout_ECX + 0x98) = 4;
      }
    }
    else if (iVar2 != 4) goto LAB_00520b13;
    *(int *)(extraout_ECX + 0xa8) = *(int *)(extraout_ECX + 0xa8) + -0x1e;
    if (*(int *)(extraout_ECX + 0xa8) < 1) {
      if (*(int *)(extraout_ECX + 0x68) == 0) {
        *(undefined4 *)(extraout_ECX + 100) = 7;
        *(undefined4 *)(extraout_ECX + 0x68) = 1;
        if (*(int *)(extraout_ECX + 0x14) != 0) {
          piStack_208 = (int *)0x52008c;
          FUN_00815de9();
        }
      }
      piStack_208 = (int *)0x15c;
      piStack_20c = (int *)(unaff_EBP + -0x30);
      iStack_210 = 0x52009f;
      piStack_20c = (int *)FUN_00679d22();
      piStack_208 = (int *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_210 = 0x5200ab;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_208 = (int *)0x5200b9;
      FUN_00414ebb();
    }
  }
LAB_00520b13:
  piStack_208 = (int *)0x520b1b;
  FUN_008162ff();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_208 = (int *)0x520b27;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


