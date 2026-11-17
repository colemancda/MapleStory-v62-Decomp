/* FUN_00849e6a - 0x00849e6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849e6a(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x849e82;
  cVar2 = FUN_0042452b();
  iVar5 = DAT_00978368;
  if (cVar2 == '\x02') {
    uStack_14 = 0x849f36;
    FUN_004e2321();
    uStack_14 = 0x849f3e;
    uVar4 = FUN_0042452b();
    uVar3 = 0;
    if ((uVar4 & 0xff) != 0) {
      *(uint *)(unaff_EBP + -0x10) = uVar4 & 0xff;
      do {
        uStack_14 = *(undefined4 *)(unaff_EBP + 8);
        uStack_18 = 0x849f54;
        FUN_004e22e3();
        uStack_18 = 0x849f5b;
        FUN_004b6aa1();
        piVar1 = (int *)(unaff_EBP + -0x10);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
    }
    if (*(int *)(extraout_ECX + 0x3234) != 0) {
      uStack_14 = 3;
      uStack_18 = 0x849f71;
      iVar5 = FUN_00849a47();
      if (iVar5 == 0) {
        uStack_14 = 0x110;
        uStack_18 = 0x849f84;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar5 != 0) {
          uStack_14 = 0x849f95;
          uVar3 = FUN_004defeb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_14 = 0x849fa2;
        FUN_004e1371();
        uStack_18 = 0x849faa;
        uStack_14 = uVar3;
        FUN_008497ad();
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      *(undefined1 **)(unaff_EBP + 8) = auStack_24;
      uVar3 = 0xa60;
    }
    else {
      if (cVar2 != '\x04') goto LAB_00849faa;
      *(undefined4 *)(DAT_00978368 + 0x208c) = 0;
      uStack_14 = 0x849eae;
      uVar3 = FUN_007d1e08();
      *(undefined4 *)(iVar5 + 0x2090) = uVar3;
      uStack_14 = 0x849ebc;
      cVar2 = FUN_0042452b();
      if (cVar2 == '\0') {
        *(undefined1 **)(unaff_EBP + 8) = auStack_24;
        uVar3 = 0xa2a;
      }
      else if (cVar2 == '\x01') {
        *(undefined1 **)(unaff_EBP + 8) = auStack_24;
        uVar3 = 0xa2b;
      }
      else {
        if (cVar2 != '\x02') goto LAB_00849faa;
        *(undefined1 **)(unaff_EBP + 8) = auStack_24;
        uVar3 = 0xa2c;
      }
    }
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    FUN_00679d22(auStack_24,uVar3);
    FUN_007db3ad();
  }
LAB_00849faa:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


