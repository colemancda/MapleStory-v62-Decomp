/* ptr_004e0a48 - 0x004e0a48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void ptr_004e0a48(void)

{
  int extraout_ECX;
  int unaff_EBP;
  uint *puVar1;
  uint uStack_30;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x10c) != 0) goto LAB_004e0ca7;
  if (*(int *)(extraout_ECX + 0xbc) != 3) {
    *(int *)(extraout_ECX + 0x10c) = 1;
  }
  if (*(int *)(unaff_EBP + 8) == 2000) {
    switch(*(int *)(extraout_ECX + 0xbc)) {
    case 0:
      uStack_30 = *(uint *)(extraout_ECX + 0xc4);
      FUN_006d1f73();
      break;
    case 1:
      uStack_30 = *(uint *)(extraout_ECX + 200);
      FUN_00429303();
      FUN_004eb1bf();
      break;
    case 2:
      uStack_30 = 0;
      FUN_005c0a5d(*(undefined4 *)(extraout_ECX + 0xc4));
      break;
    case 3:
      uStack_30 = 0x5c;
      FUN_004e20c9(0x1d6);
      break;
    case 4:
      if (*(int *)(extraout_ECX + 0xd8) != 0) {
        uStack_30 = 0;
        FUN_0060142b(0x70,0);
        uStack_30 = 3;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00457cda();
        uStack_30 = *(uint *)(extraout_ECX + 0xd4);
        FUN_00457d37();
        uStack_30 = 0;
        FUN_00457cda();
        uStack_30 = unaff_EBP - 0x1c;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_004e0c84;
      }
      break;
    case 5:
      uStack_30 = 0;
      FUN_0060142b(0x83,0);
      uStack_30 = 4;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00457cda();
      uStack_30 = *(uint *)(extraout_ECX + 0xd4);
      FUN_00457d37();
      puVar1 = &uStack_30;
      *(uint **)(unaff_EBP + 8) = &uStack_30;
      FUN_004e21db(&uStack_30);
      FUN_004dee9b(puVar1);
      FUN_00459cb5();
      uStack_30 = unaff_EBP - 0x1c;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_004e0c84:
      uStack_30 = 0x4e0c89;
      FUN_0045ebca();
      break;
    case 6:
      uStack_30 = 6;
      FUN_008320df();
      uStack_30 = (uint)*(ushort *)(extraout_ECX + 0xe0);
      FUN_0084bb40(*(ushort *)(extraout_ECX + 0xe0) == 0);
      break;
    case 7:
      if (*(int *)(extraout_ECX + 0xdc) != 0) {
        uStack_30 = 0;
        FUN_0060142b(0x72,0);
        uStack_30 = 6;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00457cda();
        uStack_30 = *(uint *)(extraout_ECX + 0xd4);
        FUN_00457d37();
        uStack_30 = *(uint *)(DAT_00978368 + 0x2088);
        FUN_00457d37();
        uStack_30 = unaff_EBP - 0x1c;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_004e0c84;
      }
      break;
    case 9:
      if (*(int *)(extraout_ECX + 0xf0) != 0) {
        uStack_30 = 0;
        FUN_0060142b(0x3d,0);
        uStack_30 = 0;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00457cda();
        uStack_30 = 0xffffffff;
        FUN_00457d37();
        uStack_30 = 2;
        FUN_00457d37();
        uStack_30 = unaff_EBP - 0x2c;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_004e0c84;
      }
    }
    if ((*(int *)(extraout_ECX + 0xbc) == 3) && (*(int *)(DAT_00978368 + 0x3234) != 0))
    goto LAB_004e0ca7;
    uStack_30 = 1;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 0x7d1) goto LAB_004e0ca7;
    uStack_30 = 0;
  }
  FUN_004de7d7();
LAB_004e0ca7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


