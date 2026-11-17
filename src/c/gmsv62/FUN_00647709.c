/* FUN_00647709 - 0x00647709 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00647709(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x94) + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = extraout_ECX + 0xc0;
  if (iVar2 == 0) {
    iVar1 = extraout_ECX + 0xbc;
  }
  iVar2 = *(int *)(extraout_ECX + 0xf8 + iVar2 * 4);
  *(int *)(unaff_EBP + -0x3c) = iVar1;
  iStack_100 = 0x647754;
  FUN_004acfe9();
  *(int *)(unaff_EBP + -0x34) = iVar2;
  *(int *)(unaff_EBP + -0x38) = iVar2 << 6;
  *(undefined4 *)(unaff_EBP + -0x18) = 0x99;
  iVar1 = extraout_ECX;
  do {
    iVar2 = **(int **)(unaff_EBP + -0x3c);
    if ((iVar2 != 0) && (*(uint *)(unaff_EBP + -0x34) < *(uint *)(iVar2 + -4))) {
      iVar2 = *(int *)(unaff_EBP + -0x38) + iVar2;
      iVar4 = *(int *)(iVar1 + 0xe0);
      *(int *)(unaff_EBP + -0x24) = iVar2;
      if (iVar4 == *(int *)(unaff_EBP + -0x34)) {
        iStack_100 = 0xff;
        iStack_104 = 0x6477ac;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar1 + 0xdc);
        piVar3 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar3 == (int *)0x0) {
          iStack_100 = 0x6477ca;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar3;
        iStack_10c = *(int *)(unaff_EBP + -0x1c);
        iStack_108 = *(int *)(unaff_EBP + -0xa8);
        iStack_104 = *(int *)(unaff_EBP + -0xa4);
        iStack_110 = *(int *)(unaff_EBP + -0x18) + -0x1a;
        iStack_100 = *(int *)(unaff_EBP + -0xa0);
        *(int **)(unaff_EBP + -0x14) = piVar3;
        iVar1 = (**(code **)(iVar1 + 0x80))();
        if (iVar1 < 0) {
          iStack_100 = *(int *)(unaff_EBP + -0x14);
          iStack_108 = 0x647806;
          iStack_104 = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_100 = 0x647816;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_100 = 0x647821;
          FUN_00878dfb();
        }
        iVar2 = *(int *)(unaff_EBP + -0x24);
      }
      iStack_100 = 0xff;
      iStack_104 = 0x647836;
      FUN_004031b7();
      iVar1 = *(int *)(iVar2 + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(int *)(unaff_EBP + -0x10) = iVar1;
      if (iVar1 == 0) {
        iStack_100 = 0x64784e;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(iVar2 + 0x14);
      *(int *)(unaff_EBP + -0x14) = iVar1;
      if (iVar1 == 0) {
        iStack_100 = 0x647862;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_100 = 0x647875;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x1c) = piVar3;
      iVar1 = FUN_0040eed0();
      *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + -0x18) - iVar1) + 8;
      FUN_0040eea9();
      iStack_10c = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_110 = *(int *)(unaff_EBP + -0x14);
      iStack_108 = *(int *)(unaff_EBP + -200);
      iStack_104 = *(int *)(unaff_EBP + -0xc4);
      iStack_100 = *(int *)(unaff_EBP + -0xc0);
      iVar1 = (**(code **)(*piVar3 + 0x80))();
      if (iVar1 < 0) {
        iStack_100 = *(int *)(unaff_EBP + -0x1c);
        iStack_108 = 0x6478cf;
        iStack_104 = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_100 = 0x6478df;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_100 = 0x6478ea;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x24) + 0x10) == 0) {
        iStack_100 = 0;
      }
      else {
        iStack_100 = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      iStack_104 = 0x64790c;
      FUN_00414edd();
      iStack_104 = *(int *)(unaff_EBP + -0x28) + 0xd4;
      *(int **)(unaff_EBP + -0x10) = &iStack_100;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(int *)(unaff_EBP + -0x1c) = iStack_104;
      iStack_108 = 0x64792d;
      FUN_0046fcc9();
      iStack_104 = unaff_EBP + -0x2c;
      iStack_108 = 0x647936;
      FUN_007d3a22();
      iStack_100 = 0x647945;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_100 = 0x647955;
      FUN_00403191();
      iStack_100 = unaff_EBP + -0xe8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_104 = 0x64796f;
      iStack_104 = FUN_004458be();
      iStack_108 = 0x647978;
      iStack_10c = FUN_00449713();
      *(int **)(unaff_EBP + -0x10) = &iStack_108;
      iStack_110 = 0x647984;
      FUN_00448a17();
      iVar1 = *(int *)(unaff_EBP + -0x18);
      iStack_10c = iVar1 + -0x19;
      iStack_110 = 0x31;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0044974c();
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_100 = 0x6479b2;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_100 = 0x6479bd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_100 = 0x6479cd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_100 = 0x6479d8;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      iStack_100 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x18);
      iStack_104 = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_108 = 0x6479f1;
      FUN_007d3546();
      iStack_100 = unaff_EBP + -0x40;
      iStack_104 = 0x647a09;
      piVar3 = (int *)FUN_00679d22();
      iStack_100 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_104 = 0x647a24;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
      iStack_100 = 0x647a3c;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_100 = 0x647a4c;
      FUN_00403191();
      iStack_100 = unaff_EBP + -0xd8;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_104 = 0x647a66;
      iStack_104 = FUN_004458be();
      iStack_108 = 0x647a6f;
      iStack_10c = FUN_00449713();
      *(int **)(unaff_EBP + -0x10) = &iStack_108;
      iStack_110 = 0x647a7b;
      iStack_108 = extraout_ECX_00;
      FUN_00448a17();
      iStack_110 = 0x31;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_10c = iVar1 + -7;
      FUN_0044974c();
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_100 = 0x647aa1;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_100 = 0x647aac;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_100 = 0x647abc;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_100 = 0x647ac7;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(unaff_EBP + -0x24);
      FUN_0045e2eb();
      iStack_100 = *(int *)(iVar1 + 0x18);
      iStack_104 = 0x647add;
      iVar4 = FUN_0064953a();
      iVar2 = extraout_ECX_01;
      if (iVar4 != 0) {
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        iStack_104 = unaff_EBP + -0x30;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_108 = 0x647af9;
        iStack_100 = iVar4;
        FUN_007d3546();
        iStack_100 = unaff_EBP + -0x44;
        iStack_104 = 0x647b0c;
        piVar3 = (int *)FUN_00679d22();
        iStack_100 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_104 = 0x647b27;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00414ebb();
        iStack_100 = 0x647b42;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
        iStack_100 = unaff_EBP + -0x88;
        iStack_104 = 0x647b4f;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_100 = 0x647b5b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_100 = 0x647b68;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
        iStack_100 = unaff_EBP + -0x98;
        iStack_104 = 0x647b75;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_100 = 0x647b81;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_100 = 0x647b94;
        iStack_104 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_100;
        iStack_108 = 0x647ba0;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_104 = 0x647bac;
        FUN_0044974c();
        iStack_104 = 0x647bb3;
        uVar5 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
        piVar3 = (int *)FUN_004115d9();
        iVar1 = *piVar3;
        iStack_108 = *(int *)(unaff_EBP + -0x88);
        iStack_104 = *(undefined4 *)(unaff_EBP + -0x84);
        iStack_100 = *(int *)(unaff_EBP + -0x80);
        iStack_10c = -0x60000000;
        iVar2 = *(int *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x14) = piVar3;
        iStack_110 = iVar2;
        iVar1 = (**(code **)(iVar1 + 0x90))();
        if (iVar1 < 0) {
          iStack_128 = *(undefined4 *)(unaff_EBP + -0x14);
          uStack_130 = 0x647bfe;
          iStack_12c = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_128 = 0x647c0e;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_128 = 0x647c19;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_128 = 0x647c29;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_128 = 0x647c34;
          FUN_00878dfb();
        }
        iStack_128 = 0x647c40;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iStack_128 = unaff_EBP + -0x58;
        iStack_12c = 0x647c4a;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_128 = 0x647c56;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_128 = 0x647c60;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        iStack_128 = unaff_EBP + -0x78;
        iStack_12c = 0x647c6a;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_128 = 0x647c76;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_128 = 0x647c80;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        iStack_128 = unaff_EBP + -0x68;
        iStack_12c = 0x647c8a;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_128 = 0x647c96;
          FUN_00878dfb();
        }
        iStack_128 = unaff_EBP + -0x78;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_12c = 0x647caa;
        iStack_12c = FUN_004458be();
        uStack_130 = 0x647cb3;
        iStack_134 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_130;
        iStack_138 = 0x647cbf;
        uStack_130 = extraout_ECX_02;
        FUN_00448a17();
        iStack_134 = iVar2 + -5;
        iStack_138 = unaff_EBP + -0x68;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_13c = 0x647cd3;
        uVar5 = FUN_00449713();
        *(int **)(unaff_EBP + -0x14) = &iStack_13c;
        FUN_00448a17(uVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_0044974c();
        iVar1 = FUN_00448ebb();
        iStack_13c = unaff_EBP + -0x48;
        iStack_138 = 6;
        FUN_007d4a9a();
        iStack_110 = iVar1 + 0x36;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        FUN_0044974c();
        FUN_005c1d2c();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
          iStack_100 = 0x647d2e;
          (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_100 = 0x647d3b;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_100 = 0x647d46;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_100 = 0x647d53;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_100 = 0x647d5e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_100 = 0x647d6b;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_100 = 0x647d76;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00414ebb();
        iVar1 = *(int *)(unaff_EBP + -0x24);
        iVar2 = extraout_ECX_03;
      }
      if (1 < *(int *)(iVar1 + 0x30)) {
        iStack_104 = *(int *)(unaff_EBP + -0x28) + 0xd8;
        *(int **)(unaff_EBP + -0x10) = &iStack_100;
        iStack_108 = 0x647da1;
        iStack_100 = iVar2;
        FUN_00424dbc();
        iStack_104 = *(undefined4 *)(iVar1 + 0x30);
        iStack_108 = *(int *)(unaff_EBP + -0x18) + -6;
        iStack_10c = 6;
        *(int **)(unaff_EBP + -0x10) = &iStack_110;
        iStack_110 = extraout_ECX_04;
        FUN_0046fc23();
        FUN_007d3201();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      iVar1 = *(int *)(unaff_EBP + -0x28);
    }
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 0x40;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x28;
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
  } while (*(int *)(unaff_EBP + -0x18) < 0x161);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_100 = 0x647e08;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


