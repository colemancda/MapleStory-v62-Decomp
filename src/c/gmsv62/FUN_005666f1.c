/* FUN_005666f1 - 0x005666f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005666f1(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar5;
  int local_3c;
  
  iVar2 = FUN_00879bb8();
  if ((((*(int *)(extraout_ECX + 0x144) == 0) &&
       (iVar2 = *(int *)(extraout_ECX + 0x160), -1 < iVar2)) &&
      (iVar2 < *(int *)(extraout_ECX + 0x104))) &&
     ((*(int *)(iVar2 * 0x280 + *(int *)(extraout_ECX + 0x10c)) != 0 &&
      (uVar4 = *(uint *)(*(int *)(extraout_ECX + 0x11c) + iVar2 * 4), -1 < (int)uVar4)))) {
    iVar1 = *(int *)(extraout_ECX + 0x15c);
    iVar2 = extraout_ECX + 0x15c;
    if ((iVar1 != 0) && (uVar4 < *(uint *)(iVar1 + -4))) {
      iVar2 = *(int *)(uVar4 * 0x20 + 0x1c + iVar1);
      puVar5 = (undefined4 *)(uVar4 * 0x20 + iVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4);
      }
      local_3c = unaff_EBP + -0xd;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      FUN_0047266d(uVar3);
      iVar2 = puVar5[7];
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4);
      }
      local_3c = unaff_EBP + -0xe;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      FUN_0056a96b(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      uVar4 = 0;
      while ((puVar5[7] != 0 && (uVar4 < *(uint *)(puVar5[7] + -4)))) {
        local_3c = *(int *)(unaff_EBP + -0x14) + puVar5[7];
        FUN_00414f8b();
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10 + puVar5[7]);
        iVar2 = *(int *)(unaff_EBP + -0x18);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x14;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + iVar2 * 4) = uVar3;
        uVar4 = *(uint *)(unaff_EBP + -0x18);
      }
      local_3c = unaff_EBP + -0x24;
      FUN_00830029(*puVar5,0xffffffff,unaff_EBP + -0x28);
      local_3c = 0;
      FUN_0060142b(0xe,0);
      local_3c = *(int *)(*(int *)(extraout_ECX + 0x160) * 0x280 + *(int *)(extraout_ECX + 0x10c));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00457d37();
      local_3c = *(int *)(*(int *)(extraout_ECX + 0x11c) + *(int *)(extraout_ECX + 0x160) * 4);
      FUN_00457d37();
      local_3c = -1;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      FUN_00414edd(&DAT_00978474);
      local_3c = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0056a319();
      *(int **)(unaff_EBP + -0x18) = &local_3c;
      local_3c = 0;
      FUN_00414f8b(unaff_EBP + -0x20);
      FUN_00459cb5();
      local_3c = -1;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_00414edd(&DAT_00978474);
      local_3c = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0056a485();
      *(int **)(unaff_EBP + -0x18) = &local_3c;
      local_3c = 0;
      FUN_00414f8b(unaff_EBP + -0x1c);
      FUN_00459cb5();
      local_3c = unaff_EBP + -0x38;
      FUN_00565a2e();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_3c = 0x5668df;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_3c = 0x5668eb;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_3c = 0x5668f7;
      FUN_0045ebca();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_3c = 0x566902;
      FUN_00524ec7();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_3c = 0x56690e;
      iVar2 = FUN_0045f10c();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


