/* FUN_0084cdb0 - 0x0084cdb0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084cdb0(void)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  uVar5 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  iStack_54 = 0x84cdcd;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\x06') {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_008f0ce0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_54 = 0x84ce55;
    uVar7 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
    iStack_54 = 0x84ce5f;
    iVar8 = FUN_0042459a();
    *(int *)(unaff_EBP + -0x1c) = iVar8;
    if (0 < iVar8) {
      *(int *)(unaff_EBP + 8) = iVar8;
      do {
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        iStack_54 = 0x84ce78;
        FUN_0084eb99();
        iStack_54 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_58 = 0x84ce87;
        iStack_54 = FUN_0045cdbc();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_58 = 0x84ce97;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          iStack_54 = *(int *)(unaff_EBP + -0x14) + -0xc;
          iStack_58 = 0x84ceab;
          FUN_00434e38();
        }
        iVar8 = *(int *)(unaff_EBP + -0x30);
        iStack_54 = 0x84ceb6;
        uVar7 = FUN_0042459a();
        *(undefined4 *)(iVar8 + 0x14) = uVar7;
        iStack_54 = unaff_EBP + -0x18;
        iStack_58 = 0x84cec4;
        iStack_54 = FUN_0045cdbc();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_58 = 0x84ced4;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iStack_54 = *(int *)(unaff_EBP + -0x18) + -0xc;
          iStack_58 = 0x84cee8;
          FUN_00434e38();
        }
        puVar6 = *(undefined4 **)(unaff_EBP + -0x30);
        iStack_54 = 0x84cef3;
        uVar7 = FUN_0042459a();
        *puVar6 = uVar7;
        iVar8 = *(int *)(unaff_EBP + -0x30);
        iStack_54 = 0x84ceff;
        uVar7 = FUN_0042459a();
        *(undefined4 *)(iVar8 + 4) = uVar7;
        iVar8 = *(int *)(unaff_EBP + -0x30);
        iStack_54 = 0x84cf0c;
        uVar7 = FUN_0042459a();
        *(undefined4 *)(iVar8 + 8) = uVar7;
        iVar8 = *(int *)(unaff_EBP + -0x30);
        iStack_54 = 0x84cf19;
        uVar7 = FUN_0042459a();
        *(undefined4 *)(iVar8 + 0x10) = uVar7;
        iVar8 = *(int *)(unaff_EBP + -0x30);
        iStack_54 = 0x84cf26;
        uVar3 = FUN_0042452b();
        *(undefined1 *)(iVar8 + 0x20) = uVar3;
        iVar8 = *(int *)(unaff_EBP + -0x30);
        iStack_54 = 0x84cf33;
        uVar3 = FUN_0042452b();
        *(undefined1 *)(iVar8 + 0xc) = uVar3;
        if (*(char *)(*(int *)(unaff_EBP + -0x30) + 0xc) == '\x01') {
          iStack_58 = unaff_EBP + -0x3c;
          uStack_5c = 0x84cf49;
          iStack_54 = uVar5;
          uVar7 = FUN_004b57d7();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar7;
          iVar8 = *(int *)(unaff_EBP + -0x30);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_54 = 0x84cf5f;
          FUN_0052e11f();
          iStack_54 = 0x84cf66;
          FUN_0046575e();
          *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_54 = 0x84cf7b;
          FUN_0046575e();
        }
        iStack_54 = unaff_EBP + -0x34;
        iStack_58 = 0x84cf87;
        FUN_0084eb80();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_54 = 0x84cf92;
        FUN_0071ce08();
        piVar1 = (int *)(unaff_EBP + 8);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      iStack_54 = 0;
      iStack_58 = 0;
      uStack_5c = 0;
      uStack_60 = 0;
      uStack_64 = 0xdea;
      FUN_00679d22(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_64 = 0x84d017;
      uVar5 = FUN_00483ba7();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_64 = 0x84d024;
      uStack_64 = FUN_00449713();
      uVar5 = FUN_00434e21(uVar5);
      *(undefined4 **)(unaff_EBP + 8) = &uStack_64;
      FUN_00450368(uVar5);
      FUN_007db3ad();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        iStack_54 = *(int *)(unaff_EBP + -0x24) + -0xc;
        iStack_58 = 0x84d053;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        iStack_54 = *(int *)(unaff_EBP + -0x28) + -0xc;
        iStack_58 = 0x84d067;
        FUN_00434e38();
      }
      iVar8 = *(int *)(unaff_EBP + -0x2c);
      *(undefined4 *)(iVar8 + 0x208c) = 0;
      iStack_54 = 0x84d076;
      uVar5 = FUN_007d1e08();
      *(undefined4 *)(iVar8 + 0x2090) = uVar5;
    }
    else {
      if (DAT_00979178 != 0) {
        iStack_54 = 0x84cfaf;
        FUN_00815de9();
        if (DAT_00979178 != 0) {
          iStack_54 = 1;
          iStack_58 = 0x84cfc1;
          (*(code *)**(undefined4 **)(DAT_00979178 + 8))();
        }
      }
      iStack_54 = 0x5e8;
      iStack_58 = 0x84cfd0;
      iVar8 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar8 != 0) {
        iStack_54 = unaff_EBP + -0x50;
        iStack_58 = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_5c = 0x84cfed;
        FUN_00718f15();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_008f0ce0;
    iStack_54 = 0x84d08f;
    FUN_0071bce6();
  }
  else if (cVar2 == '\a') {
    iStack_54 = 0x84cde3;
    uVar4 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    if ((uVar4 & 0xff) != 0) {
      *(uint *)(unaff_EBP + -0x10) = uVar4 & 0xff;
      do {
        iStack_54 = 0x84ce00;
        uVar5 = FUN_0042459a();
        iStack_54 = 0xffffffff;
        iStack_58 = 0x84ce0c;
        puVar6 = (undefined4 *)FUN_0045f1e3();
        piVar1 = (int *)(unaff_EBP + -0x10);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        *puVar6 = uVar5;
      } while (iVar8 != 0);
    }
    if (DAT_00979174 != 0) {
      iStack_54 = unaff_EBP + 8;
      iStack_58 = 0x84ce28;
      FUN_00627ce8();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_54 = 0x84ce34;
    FUN_00445a30();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


