/* FUN_005536ce - 0x005536ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005536ce(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int iVar2;
  int *local_2c;
  
  FUN_00879bb8();
  local_2c = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004497f5(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    *puVar1 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        local_2c = (int *)0x63a;
        puVar1 = (undefined4 *)FUN_00679e4e(unaff_EBP + 0x10);
        *(undefined4 *)(unaff_EBP + -0x10) = 0x10;
      }
      else {
        local_2c = (int *)0x916;
        puVar1 = (undefined4 *)FUN_00679e4e(unaff_EBP + 0x14);
        *(undefined4 *)(unaff_EBP + -0x10) = 8;
      }
      local_2c = (int *)*puVar1;
      *(int ***)(unaff_EBP + -0x18) = &local_2c;
      FUN_00408b49();
      iVar2 = unaff_EBP + -0x28;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      FUN_0040263d(iVar2);
      local_2c = (int *)FUN_004048a4(iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 10;
      local_2c = (int *)FUN_00412348(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004172b7();
      local_2c = *(int **)(unaff_EBP + -0x14);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (local_2c != (int *)0x0) {
        (**(code **)(*local_2c + 8))();
      }
      local_2c = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      local_2c = (int *)FUN_00402bc3();
      if ((int)local_2c < 0) {
        FUN_00878dfb();
      }
      if (((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef,
         *(int *)(unaff_EBP + 0x10) != 0)) {
        local_2c = (int *)0x5538bd;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 8) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7,
         *(int *)(unaff_EBP + 0x14) != 0)) {
        local_2c = (int *)0x5538d8;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
      }
    }
    else {
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        local_2c = (int *)0x917;
        puVar1 = (undefined4 *)FUN_00679e4e(unaff_EBP + 0x10);
        *(undefined4 *)(unaff_EBP + -0x10) = 4;
      }
      else {
        local_2c = (int *)0x915;
        puVar1 = (undefined4 *)FUN_00679e4e(unaff_EBP + 0x14);
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
      }
      local_2c = (int *)*puVar1;
      *(int ***)(unaff_EBP + -0x18) = &local_2c;
      FUN_00408b49();
      iVar2 = unaff_EBP + -0x28;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar2);
      local_2c = (int *)FUN_004048a4(iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      local_2c = (int *)FUN_00412348(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004172b7();
      local_2c = *(int **)(unaff_EBP + -0x14);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (local_2c != (int *)0x0) {
        (**(code **)(*local_2c + 8))();
      }
      local_2c = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_2c = (int *)FUN_00402bc3();
      if ((int)local_2c < 0) {
        FUN_00878dfb();
      }
      if (((*(byte *)(unaff_EBP + -0x10) & 4) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb,
         *(int *)(unaff_EBP + 0x10) != 0)) {
        local_2c = (int *)0x5537d1;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
         *(int *)(unaff_EBP + 0x14) != 0)) {
        local_2c = (int *)0x5537f5;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
      }
    }
    local_2c = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


