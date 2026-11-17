/* FUN_0074b7ad - 0x0074b7ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 * FUN_0074b7ad(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = FUN_0044da62(*(undefined4 *)(unaff_EBP + 0xc),2,unaff_EBP + -0x14,0);
  if (iVar1 == 0) {
switchD_0074b7f1_caseD_b:
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
  }
  else {
    switch(*(undefined4 *)(unaff_EBP + -0x14)) {
    case 1:
      uVar3 = 0x272;
      break;
    case 2:
      uVar3 = 0x273;
      break;
    case 3:
      uVar3 = 0x274;
      break;
    case 4:
      uVar3 = 0x275;
      break;
    case 5:
      if (*(int *)(unaff_EBP + 0xc) / 10000 == 0x69) {
        uVar3 = FUN_00679d22(unaff_EBP + -0x18,0x276);
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 0;
      }
      else {
        uVar3 = FUN_00679d22(unaff_EBP + 0xc,0x277);
        *(undefined4 *)(unaff_EBP + -0x10) = 4;
        *(undefined4 *)(unaff_EBP + -4) = 1;
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = 0;
      FUN_00414f8b(uVar3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        FUN_00414ebb();
      }
      goto LAB_0074b92c;
    case 6:
      uVar3 = 0x278;
      break;
    case 7:
      uVar3 = 0x279;
      break;
    case 8:
      uVar3 = 0x27a;
      break;
    case 9:
      uVar3 = 0x27b;
      break;
    case 10:
      uVar3 = 0x27c;
      break;
    default:
      goto switchD_0074b7f1_caseD_b;
    case 0xc:
      uVar3 = 0x27d;
      break;
    case 0xe:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1e:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
      uVar3 = 0xe9a;
      break;
    case 0x11:
      uVar3 = 0x27e;
      break;
    case 0x12:
      uVar3 = 0xe95;
      break;
    case 0x13:
      uVar3 = 0xe96;
      break;
    case 0x14:
      uVar3 = 0xe99;
      break;
    case 0x15:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x27:
    case 0x28:
      uVar3 = 0xe9b;
    }
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),uVar3);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
  }
LAB_0074b92c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


