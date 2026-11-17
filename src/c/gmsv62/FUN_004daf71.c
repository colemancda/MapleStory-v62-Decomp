/* FUN_004daf71 - 0x004daf71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004daf71(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iStack_3c;
  undefined *puStack_38;
  
  FUN_00879bb8();
  puStack_38 = (undefined *)0x4daf8b;
  uVar3 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((uVar3 & 0xffff) != 0) {
    *(uint *)(unaff_EBP + -0x24) = uVar3 & 0xffff;
    do {
      puStack_38 = (undefined *)(unaff_EBP + -0x28);
      iStack_3c = 0x4dafb2;
      puStack_38 = (undefined *)FUN_0045cdbc();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_3c = 0x4dafbf;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = 0;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        iStack_3c = 0x4dafd5;
        FUN_00434e38();
      }
      puStack_38 = (undefined *)0x4dafde;
      uVar1 = FUN_0042452b();
      puStack_38 = (undefined *)0x0;
      iStack_3c = 0;
      *(undefined1 *)(unaff_EBP + -0xd) = uVar1;
      puStack_38 = (undefined *)FUN_004538dc(&DAT_00964da4);
      iStack_3c = unaff_EBP + -0x20;
      FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        iVar7 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
      }
      puStack_38 = (undefined *)0x0;
      iStack_3c = 0;
      iVar4 = FUN_004538dc(&DAT_00964da4);
      puStack_38 = (undefined *)((iVar7 - iVar4) + -3);
      iStack_3c = unaff_EBP + -0x1c;
      FUN_0045e08c();
      puStack_38 = (undefined *)0x1;
      iStack_3c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar5 = FUN_00415015(0x400,1);
      FUN_00471777(uVar5);
      puStack_38 = (undefined *)0xffffffff;
      iStack_3c = 0x4db051;
      FUN_004150c0();
      puStack_38 = &DAT_00964da4;
      iStack_3c = unaff_EBP + -0x30;
      FUN_004653c5();
      puStack_38 = (undefined *)(unaff_EBP + -0x1c);
      iStack_3c = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_38 = (undefined *)FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_3c = 0x4db07e;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_38 = (undefined *)extraout_ECX_00;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
        iStack_3c = 0x4db092;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x30) + -0xc);
        iStack_3c = 0x4db0a7;
        FUN_00434e38();
      }
      cVar2 = *(char *)(unaff_EBP + -0xd);
      if (cVar2 == '\0') {
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
      }
      else if (cVar2 == '\x01') {
        *(undefined4 *)(unaff_EBP + -0x18) = 0xb;
      }
      else if (cVar2 == '\x02') {
        *(undefined4 *)(unaff_EBP + -0x18) = 0xc;
      }
      else if (cVar2 == '\x03') {
        *(undefined4 *)(unaff_EBP + -0x18) = 0xd;
      }
      *(int **)(unaff_EBP + -0x34) = &iStack_3c;
      uVar9 = 0xffffffff;
      iStack_3c = (int)puStack_38;
      puStack_38 = (undefined *)*(undefined4 *)(unaff_EBP + -0x18);
      uVar5 = FUN_00449713(0xffffffff);
      FUN_004dbb20(uVar5,uVar9);
      FUN_005c152d();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        iStack_3c = 0x4db10e;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
        iStack_3c = 0x4db123;
        FUN_00434e38();
      }
      piVar8 = (int *)(unaff_EBP + -0x24);
      *piVar8 = *piVar8 + -1;
    } while (*piVar8 != 0);
  }
  piVar8 = extraout_ECX + 0x7d;
  iVar7 = 3;
  do {
    puStack_38 = (undefined *)0x4db13e;
    (**(code **)(*(int *)piVar8[1] + 0xc))();
    puStack_38 = (undefined *)0x4db145;
    FUN_00450463();
    piVar8 = piVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_38 = (undefined *)(unaff_EBP + -0x30);
  iStack_3c = 0x4db157;
  puStack_38 = (undefined *)FUN_0045cdbc();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_3c = 0x4db167;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_3c = 0x4db17b;
    FUN_00434e38();
  }
  if (extraout_ECX[0x30] == 0) {
    puStack_38 = (undefined *)0x4db194;
    (**(code **)(*(int *)extraout_ECX[0x7a] + 0xc))();
    puStack_38 = (undefined *)0x4db19f;
    (**(code **)(*(int *)extraout_ECX[0x74] + 0xc))();
    puStack_38 = (undefined *)0x4db1aa;
    (**(code **)(*(int *)extraout_ECX[0x72] + 0xc))();
    puStack_38 = (undefined *)0x4db1b7;
    FUN_00450463();
    puStack_38 = (undefined *)0x4db1c4;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db1cb;
    FUN_00450463();
    extraout_ECX[0x74] = extraout_ECX[0x72];
    puStack_38 = (undefined *)0x4db1de;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db1e5;
    FUN_00450463();
    extraout_ECX[0x7a] = extraout_ECX[0x74];
    puStack_38 = (undefined *)0x4db1f1;
    iVar7 = (*DAT_0097b704)();
    extraout_ECX[0x1d0] = iVar7;
    puStack_38 = (undefined *)0x4db1ff;
    iVar7 = FUN_0042459a();
    extraout_ECX[0x1cf] = iVar7;
    puStack_38 = (undefined *)0x4db20d;
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      puStack_38 = (undefined *)0x4db237;
      (**(code **)(*(int *)extraout_ECX[0x78] + 0xc))();
      puStack_38 = (undefined *)0x4db242;
      FUN_00450463();
      extraout_ECX[0x61] = 1;
    }
    else {
      puStack_38 = (undefined *)0x4db21f;
      (**(code **)(*(int *)extraout_ECX[0x88] + 0xc))();
      puStack_38 = (undefined *)0x4db22a;
      FUN_00450463();
    }
    puStack_38 = *(undefined **)(unaff_EBP + 8);
    iStack_3c = 0x4db256;
    FUN_004db58a();
  }
  else {
    puStack_38 = (undefined *)0x4db266;
    (**(code **)(*(int *)extraout_ECX[0x78] + 0xc))();
    puStack_38 = (undefined *)0x4db271;
    (**(code **)(*(int *)extraout_ECX[0x70] + 0xc))();
    puStack_38 = (undefined *)0x4db27c;
    (**(code **)(*(int *)extraout_ECX[0x74] + 0xc))();
    puStack_38 = (undefined *)0x4db287;
    (**(code **)(*(int *)extraout_ECX[0x76] + 0xc))();
    puStack_38 = (undefined *)0x4db292;
    (**(code **)(*(int *)extraout_ECX[0x88] + 0xc))();
    puStack_38 = (undefined *)0x4db29d;
    (**(code **)(*(int *)extraout_ECX[0x84] + 0xc))();
    puStack_38 = (undefined *)0x4db2a8;
    (**(code **)(*(int *)extraout_ECX[0x86] + 0xc))();
    puStack_38 = (undefined *)0x4db2b5;
    FUN_00450463();
    puStack_38 = (undefined *)0x4db2c2;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db2c9;
    FUN_00450463();
    extraout_ECX[0x74] = extraout_ECX[0x76];
    puStack_38 = (undefined *)0x4db2dc;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db2e3;
    FUN_00450463();
    extraout_ECX[0x70] = extraout_ECX[0x74];
    puStack_38 = (undefined *)0x4db2f6;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db2fd;
    FUN_00450463();
    extraout_ECX[0x78] = extraout_ECX[0x70];
    puStack_38 = (undefined *)0x4db310;
    FUN_00450463();
    puStack_38 = (undefined *)0x4db31d;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db324;
    FUN_00450463();
    extraout_ECX[0x84] = extraout_ECX[0x86];
    puStack_38 = (undefined *)0x4db337;
    FUN_00450479();
    puStack_38 = (undefined *)0x4db33e;
    FUN_00450463();
    extraout_ECX[0x88] = extraout_ECX[0x84];
    extraout_ECX[0x61] = 1;
  }
  puStack_38 = (undefined *)(unaff_EBP + -0x30);
  iStack_3c = 0x4db35a;
  puStack_38 = (undefined *)FUN_0045cdbc();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_3c = 0x4db36c;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_3c = 0x4db380;
    FUN_00434e38();
  }
  puStack_38 = (undefined *)0xd40;
  iStack_3c = unaff_EBP + -0x30;
  puVar6 = (undefined4 *)FUN_00679d22();
  puStack_38 = (undefined *)extraout_ECX[0x67];
  uVar5 = *puVar6;
  iStack_3c = extraout_ECX[0x1cc];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00434e21(extraout_ECX + 0x68,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_3c = extraout_ECX_01;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_38 = (undefined *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_3c = 0x4db3c6;
    FUN_00434e38();
    iStack_3c = (int)puStack_38;
  }
  puStack_38 = (undefined *)0x1f0;
  *(int **)(unaff_EBP + -0x34) = &iStack_3c;
  FUN_007d4a9a(&iStack_3c,0x1f);
  FUN_007d3a22(extraout_ECX + 0x67);
  puStack_38 = (undefined *)0x4db3ed;
  uVar3 = FUN_0042452b();
  puStack_38 = *(undefined **)(unaff_EBP + 8);
  extraout_ECX[0x6b] = uVar3 & 0xff;
  iStack_3c = 0x4db400;
  (**(code **)(*extraout_ECX + 0x6c))();
  if (extraout_ECX[0x30] == 0) {
    iStack_3c = 0;
    FUN_008320df();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_3c = 0x4db422;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


