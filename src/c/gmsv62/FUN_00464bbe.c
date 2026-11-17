/* FUN_00464bbe - 0x00464bbe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00464bbe(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  iStack_24 = 0x464bdf;
  FUN_0042459a();
  iStack_24 = 0x464be6;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x14) = uVar3 & 0xff;
  iStack_24 = 0x464bf3;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_24 = 0x464bfd;
  cVar2 = FUN_0042452b();
  if (cVar2 != '\0') {
    iStack_24 = 0x464c0f;
    FUN_0045f10c();
    iStack_24 = 0x464c16;
    iVar5 = FUN_0042459a();
    if (0 < iVar5) {
      *(int *)(unaff_EBP + 8) = iVar5;
      do {
        iStack_24 = unaff_EBP + -0x10;
        uStack_28 = 0x464c28;
        iStack_24 = FUN_0045cdbc();
        uStack_28 = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_2c = 0x464c39;
        FUN_004655d4();
        uStack_28 = 0x464c40;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_24 = 0x464c4c;
        FUN_00414ebb();
        piVar1 = (int *)(unaff_EBP + 8);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
    }
  }
  switch(*(undefined4 *)(unaff_EBP + -0x14)) {
  case 0:
    iStack_24 = 0xa8;
    uStack_28 = 0x464c73;
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar5;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      uStack_28 = 0x464c88;
      iVar5 = FUN_006a5551();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar5 != 0) & iVar5 + 8U;
    *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar3 != 0) & uVar3 - 8;
    iStack_24 = 0x464caf;
    FUN_004654b1();
    iStack_24 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uStack_28 = 0x464cc1;
    FUN_006a5e17();
    iStack_24 = 0x464cc9;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_24 = 0x464cd5;
    FUN_004654ce();
    goto LAB_00464d7d;
  case 1:
    iStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    FUN_0045f0f3(s_Cannot_find_Character_Informatio_009646bc,0xffffffff);
    goto LAB_00464d75;
  case 2:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xf5d;
    break;
  case 3:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xf63;
    break;
  case 4:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xf5e;
    break;
  case 5:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xf5f;
    break;
  case 6:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xf69;
    break;
  case 7:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xf64;
    break;
  default:
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    uVar4 = 0xdaa;
  }
  iStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_00679d22(auStack_34,uVar4);
LAB_00464d75:
  FUN_007db3ad();
LAB_00464d7d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


