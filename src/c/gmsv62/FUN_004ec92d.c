/* FUN_004ec92d - 0x004ec92d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ec92d(void)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  uint extraout_ECX_03;
  int unaff_EBP;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  puStack_50 = (undefined4 *)0x4ec94a;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    puStack_50 = (undefined4 *)0x4eccf1;
    uVar5 = FUN_0042452b();
    puStack_50 = (undefined4 *)0x4eccfb;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    puStack_50 = (undefined4 *)0x4ecd05;
    puVar8 = (undefined4 *)FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    puStack_50 = (undefined4 *)0x63b;
    puStack_54 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined4 *)0x4ecd20;
    puStack_54 = (undefined4 *)FUN_00679d86();
    puStack_54 = (undefined4 *)*puStack_54;
    puStack_58 = (undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_5c = (undefined4 *)0x4ecd31;
    puStack_50 = (undefined4 *)(uVar5 & 0xff);
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_54 = extraout_ECX_02;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      puStack_50 = (undefined4 *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
      puStack_54 = (undefined4 *)0x4ecd47;
      FUN_00403384();
      puStack_54 = puStack_50;
    }
    puStack_50 = (undefined4 *)0xc00614a4;
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_54;
    puStack_58 = (undefined4 *)0x0;
    puStack_5c = (undefined4 *)0x4ecd59;
    FUN_00424e0a();
    puStack_5c = *(undefined4 **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(int *)(unaff_EBP + -0x14) = (int)&local_64 + 4;
    local_64 = (ulonglong)extraout_ECX_03 << 0x20;
    uStack_68 = 0x4ecd6d;
    puStack_58 = puVar8;
    FUN_00424dd7();
    local_64 = local_64 & 0xffffffff00000000;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_68 = 0x4ecd79;
    uStack_68 = FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    puStack_54 = *(undefined4 **)(unaff_EBP + -0x1c);
    puStack_58 = (undefined4 *)0x4ecd8f;
    puStack_50 = puVar8;
    puStack_58 = (undefined4 *)FUN_007d3c48();
    local_64 = CONCAT44(0x4ecd96,(undefined4)local_64);
    puStack_5c = (undefined4 *)(uVar5 & 0xff);
    FUN_007d46ef();
    iVar7 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (cVar1 == '\x01') {
      puStack_50 = (undefined4 *)0x4eccc1;
      uVar5 = FUN_0042452b();
      puStack_50 = (undefined4 *)0x4ecccb;
      puStack_58 = (undefined4 *)FUN_0042459a();
      puStack_50 = (undefined4 *)0x0;
      puStack_54 = (undefined4 *)0x0;
      local_64 = _DAT_008eacd8;
      uStack_68 = 0x4ecce5;
      puStack_5c = (undefined4 *)(uVar5 & 0xff);
      FUN_0042dc18();
      goto LAB_004ecdae;
    }
    if (cVar1 == '\x02') {
      puStack_50 = (undefined4 *)(unaff_EBP + 8);
      puStack_54 = (undefined4 *)0x4ecc89;
      FUN_0045cdbc();
      puStack_50 = (undefined4 *)0xffffffff;
      puStack_54 = *(undefined4 **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      puStack_58 = (undefined4 *)0x4ecc9d;
      FUN_005a8209();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 8) != 0) {
        puStack_50 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
        puStack_54 = (undefined4 *)0x4eccb5;
        FUN_00434e38();
      }
      goto LAB_004ecdae;
    }
    if (cVar1 == '\x03') {
      puStack_50 = (undefined4 *)(unaff_EBP + -0x24);
      puStack_54 = (undefined4 *)0x4ecac2;
      puStack_54 = (undefined4 *)FUN_0045cdbc();
      puStack_54 = (undefined4 *)*puStack_54;
      puStack_50 = (undefined4 *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -4) = 5;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      puStack_58 = (undefined4 *)0x4ecad9;
      FUN_00470891();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_50 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        puStack_54 = (undefined4 *)0x4ecaed;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      puStack_50 = (undefined4 *)0x9a1;
      puStack_54 = (undefined4 *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_58 = (undefined4 *)0x4ecb08;
      piVar6 = (int *)FUN_00679e4e();
      puStack_54 = (undefined4 *)*piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (puStack_54 == (undefined4 *)0x0) {
        puStack_54 = (undefined4 *)0x0;
      }
      else {
        puStack_54 = (undefined4 *)*puStack_54;
      }
      puStack_50 = *(undefined4 **)(unaff_EBP + -0x1c);
      puStack_58 = (undefined4 *)(unaff_EBP + -0x18);
      puStack_5c = (undefined4 *)0x4ecb25;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_50 = (undefined4 *)0x4ecb34;
      FUN_00402fa6();
      puStack_50 = (undefined4 *)0x0;
      puStack_54 = (undefined4 *)0xff;
      puStack_58 = (undefined4 *)0xc00614a4;
      *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_5c;
      local_64 = 0x4ecb4b;
      puStack_5c = extraout_ECX_00;
      FUN_00424e0a();
      local_64 = 0x10400000190;
      puVar8 = &uStack_68;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_68;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uStack_68 = extraout_ECX_01;
      FUN_004f14fa(&uStack_68);
      FUN_00485656(puVar8);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uVar3 = FUN_00411641(0);
      FUN_0042e3f0(unaff_EBP + 8,uVar3);
      puStack_50 = (undefined4 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_54 = (undefined4 *)0x4ecb93;
      cVar1 = FUN_00433bfa();
      if (cVar1 == '\0') {
        puStack_50 = &DAT_00980690;
        puStack_54 = (undefined4 *)0x4ecba9;
        FUN_00403191();
        puStack_50 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_54 = (undefined4 *)0x4ecbb6;
        FUN_00403191();
        piVar6 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (piVar6 == (int *)0x0) {
          puStack_50 = (undefined4 *)0x80004003;
          puStack_54 = (undefined4 *)0x4ecbcb;
          FUN_00878dfb();
          piVar6 = *(int **)(unaff_EBP + 8);
        }
        puStack_5c = *(undefined4 **)(unaff_EBP + -0x4c);
        puStack_58 = *(undefined4 **)(unaff_EBP + -0x48);
        iVar7 = *piVar6;
        puStack_54 = *(undefined4 **)(unaff_EBP + -0x44);
        puStack_50 = *(undefined4 **)(unaff_EBP + -0x40);
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
        *(int **)(unaff_EBP + -0x14) = piVar6;
        local_64 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x34));
        iVar7 = (**(code **)(iVar7 + 0x110))(piVar6,0,*(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar7 < 0) {
          puStack_50 = (undefined4 *)&DAT_00963df8;
          puStack_54 = *(undefined4 **)(unaff_EBP + -0x14);
          puStack_5c = (undefined4 *)0x4ecc05;
          puStack_58 = (undefined4 *)iVar7;
          FUN_00878e09();
        }
        puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_54 = (undefined4 *)0x4ecc12;
        puStack_50 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_50 < 0) {
          puStack_54 = (undefined4 *)0x4ecc1d;
          FUN_00878dfb();
        }
        puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        puStack_54 = (undefined4 *)0x4ecc2a;
        puStack_50 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_50 < 0) {
          puStack_54 = (undefined4 *)0x4ecc35;
          FUN_00878dfb();
        }
        puStack_50 = *(undefined4 **)(unaff_EBP + 8);
        *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_50;
        puStack_54 = (undefined4 *)0x4ecc45;
        FUN_00424ed4();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        puStack_54 = (undefined4 *)0x4ecc4e;
        FUN_00424e82();
        puStack_54 = (undefined4 *)0x4ecc55;
        FUN_00427af9();
      }
      puStack_50 = (undefined4 *)0x4ecc5d;
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        puStack_50 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
        puStack_54 = (undefined4 *)0x4ecc71;
        FUN_00403384();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar7 = *(int *)(unaff_EBP + -0x1c);
    }
    else {
      if (cVar1 != '\x04') {
        if (cVar1 == '\x05') {
          puStack_50 = (undefined4 *)0x4eca27;
          uVar3 = FUN_0042459a();
          puStack_50 = (undefined4 *)0x4eca30;
          uVar4 = FUN_0042459a();
          *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
          puStack_50 = (undefined4 *)0x4eca3a;
          uVar4 = FUN_0042459a();
          *(undefined4 *)(unaff_EBP + 8) = uVar4;
          puStack_50 = (undefined4 *)0x4eca44;
          bVar2 = FUN_0042452b();
          puStack_50 = (undefined4 *)0x4eca4f;
          uVar5 = FUN_0042452b();
          puStack_50 = *(undefined4 **)(unaff_EBP + 8);
          puStack_54 = *(undefined4 **)(unaff_EBP + -0x18);
          puStack_58 = (undefined4 *)(uVar5 & 0xff);
          local_64 = CONCAT44(uVar3,0x4eca63);
          puStack_5c = (undefined4 *)(uint)bVar2;
          FUN_004ed012();
        }
        else if (cVar1 == '\x06') {
          puStack_50 = (undefined4 *)(unaff_EBP + -0x14);
          puStack_54 = (undefined4 *)0x4ec98c;
          FUN_0045cdbc();
          puStack_50 = (undefined4 *)0x603;
          puStack_54 = (undefined4 *)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -4) = 0x13;
          puStack_58 = (undefined4 *)0x4ec9a6;
          FUN_00679d86();
          puStack_50 = (undefined4 *)0x0;
          puStack_54 = (undefined4 *)0x0;
          puStack_58 = (undefined4 *)0xffffffff;
          puStack_5c = *(undefined4 **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          local_64 = 0;
          uStack_68 = 0x4ec9b9;
          (*DAT_0097b4c8)();
          uStack_68 = 0x4ec9c6;
          FUN_0087a1b0();
          uStack_68 = 0x3fffffff;
          (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x14),0xffffffff,&local_64);
          uVar3 = FUN_0087a007(&local_64);
          FUN_0046febf(&local_64,uVar3);
          FUN_0045af91(*(undefined4 *)(unaff_EBP + -0x10),1,600,0,0);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_00402676();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
        }
        goto LAB_004ecdae;
      }
      puStack_50 = (undefined4 *)(unaff_EBP + -0x20);
      puStack_54 = (undefined4 *)0x4eca73;
      puStack_54 = (undefined4 *)FUN_0045cdbc();
      puStack_54 = (undefined4 *)*puStack_54;
      puStack_50 = (undefined4 *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -4) = 0x10;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      puStack_58 = (undefined4 *)0x4eca8a;
      FUN_00470891();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        puStack_50 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
        puStack_54 = (undefined4 *)0x4eca9e;
        FUN_00434e38();
      }
      puStack_50 = (undefined4 *)0x64;
      puStack_54 = *(undefined4 **)(unaff_EBP + 8);
      puStack_58 = (undefined4 *)0x4ecaa9;
      FUN_007d4970();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar7 = *(int *)(unaff_EBP + 8);
    }
  }
  if (iVar7 != 0) {
    puStack_50 = (undefined4 *)(iVar7 + -0xc);
    puStack_54 = (undefined4 *)0x4ecdad;
    FUN_00403384();
  }
LAB_004ecdae:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


