/* FUN_005c179f - 0x005c179f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_005c179f(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 < 0x66) {
    if (iVar1 == 0x65) {
      uVar3 = FUN_00679d22(unaff_EBP + -0x34,0x1d1);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00414f8b(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      switch(iVar1) {
      case 0:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x1c7);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 1:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x1cc);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 2:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x1c9);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 3:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x1ca);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 4:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x1c4);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 5:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x1c5);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 6:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x1c6);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 7:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x1c3);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 8:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x1ce);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      case 9:
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x30,0x1cd);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 8),uVar3,*(undefined4 *)(unaff_EBP + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        break;
      default:
        goto switchD_005c17cd_default;
      }
    }
  }
  else if (iVar1 == 0x66) {
    uVar3 = FUN_00679d22(unaff_EBP + -0x3c,0x1cf);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414f8b(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (iVar1 != 0x67) goto switchD_005c17cd_default;
    uVar3 = FUN_00679d22(unaff_EBP + -0x38,0x1d0);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00414f8b(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
switchD_005c17cd_default:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


