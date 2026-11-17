/* FUN_004e99df - 0x004e99df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e99df(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *local_24;
  
  FUN_00879bb8();
  if (*(int *)(DAT_00978368 + 0x2098) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(DAT_00978368 + 0x2098) + 4;
  }
  local_24 = (undefined4 *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd(iVar4);
  local_24 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_0045ec92();
  if (iVar4 == 0) {
    if (*(int *)(extraout_ECX + 0x1dc) == 0) {
      local_24 = (undefined4 *)0x0;
      FUN_0060142b(0x6c,0);
      puVar1 = *(undefined4 **)(unaff_EBP + 8);
      pcVar2 = (char *)*puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      local_24 = (undefined4 *)(!bVar3 + 1 | 4);
      FUN_00457cda();
      *(undefined4 ***)(unaff_EBP + 8) = &local_24;
      local_24 = (undefined4 *)0x0;
      FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_00459cb5();
      if (((char *)*puVar1 != (char *)0x0) && (*(char *)*puVar1 != '\0')) {
        *(undefined4 ***)(unaff_EBP + 0xc) = &local_24;
        local_24 = (undefined4 *)0x0;
        FUN_00414f8b(puVar1);
        FUN_00459cb5();
      }
      local_24 = (undefined4 *)(unaff_EBP + -0x20);
      FUN_004751b2();
      *(undefined4 *)(extraout_ECX + 0x1dc) = 1;
      local_24 = (undefined4 *)0x4e9b11;
      uVar5 = (*DAT_0097b704)();
      *(undefined4 *)(extraout_ECX + 0x1e4) = uVar5;
      if (((*(int *)(DAT_00978134 + 0x20) == 0) && ((char *)*puVar1 != (char *)0x0)) &&
         (*(char *)*puVar1 != '\0')) {
        local_24 = (undefined4 *)0xa65;
        uVar5 = FUN_00679d22(unaff_EBP + 0xc);
        local_24 = (undefined4 *)0x9;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00471102(uVar5);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_24 = (undefined4 *)0x4e9b58;
        FUN_00414ebb();
      }
      local_24 = puVar1;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_24 = (undefined4 *)0x4e9b6f;
      FUN_0045ebca();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_24 = (undefined4 *)0x4e9b7b;
      FUN_00414ebb();
      goto LAB_004e9b7b;
    }
    local_24 = (undefined4 *)0x98;
    uVar5 = FUN_00679d22(unaff_EBP + 0xc);
    local_24 = (undefined4 *)0xc;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      local_24 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + -0xc);
      FUN_00434e38();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_24 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    FUN_00434e38();
  }
LAB_004e9b7b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


