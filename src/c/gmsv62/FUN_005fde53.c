/* FUN_005fde53 - 0x005fde53 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fde53(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  if (0 < *(int *)(extraout_ECX + 0xad8)) {
    if (((*(int *)(extraout_ECX + 0x704) == 0) && (*(int *)(extraout_ECX + 0x708) == 0)) &&
       (*(int *)(extraout_ECX + 0x70c) == 0)) {
      iStack_24 = 0;
      uStack_28 = 0;
      iStack_2c = extraout_ECX + 0x6c;
      puStack_30 = (undefined1 *)0x0;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_34;
      FUN_00679d22(&uStack_34,0x1dd);
      iVar1 = FUN_007db791();
      if (iVar1 == 6) {
        iStack_24 = 0;
        uStack_28 = 0;
        iStack_2c = 0x6f;
        puStack_30 = (undefined1 *)0x5fdec4;
        FUN_0060142b();
        iStack_24 = 0x30;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_28 = 0x5fded1;
        FUN_00457cda();
        iStack_24 = unaff_EBP + -0x20;
        uStack_28 = 0x5fdee0;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x704) = 1;
        *(undefined4 *)(extraout_ECX + 0x708) = 1;
        iStack_24 = 0x5fdefb;
        FUN_0045ebca();
      }
    }
    if (*(int *)(extraout_ECX + 0x70c) == 1) {
      iStack_24 = 3;
      puStack_30 = (undefined1 *)&uStack_28;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_28;
      iStack_2c = 0x1db;
      uStack_34 = 0x5fdf19;
      FUN_00679d86();
      iStack_2c = 0x5fdf20;
      FUN_005c152d();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


