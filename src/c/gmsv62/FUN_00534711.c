/* FUN_00534711 - 0x00534711 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00534711(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_20;
  
  FUN_00879bb8();
  local_20 = 0x53472f;
  FUN_0074d6fb();
  if (*(int *)(unaff_EBP + 8) == 0x202) {
    local_20 = 0;
    *(undefined4 *)(extraout_ECX + 0x74) = *(undefined4 *)(extraout_ECX + 0x78);
    FUN_008161f1();
  }
  else if (*(int *)(unaff_EBP + 8) == 0x203) {
    iVar1 = *(int *)(extraout_ECX + 0x78);
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      local_20 = unaff_EBP + 8;
      iVar1 = FUN_0053632c(*(undefined4 *)(*(int *)(extraout_ECX + 0xa4) + iVar1 * 4),
                           *(undefined4 *)(extraout_ECX + 0x70),unaff_EBP + -0x1c,unaff_EBP + -0x18,
                           unaff_EBP + -0x10,unaff_EBP + -0x14);
      if (iVar1 == 1) {
        local_20 = 0;
        *(int **)(unaff_EBP + -0x20) = &local_20;
        FUN_00414f8b(unaff_EBP + 8);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
        puVar2 = (undefined4 *)FUN_00537b54(*(undefined4 *)(extraout_ECX + 0x78));
        FUN_0052ad8c(*puVar2,uVar3,uVar4,uVar5,uVar6);
        local_20 = 1;
        (**(code **)(*(int *)(extraout_ECX + -4) + 0x34))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_20 = 0x5347f7;
      FUN_00414ebb();
    }
    goto LAB_0053474f;
  }
  local_20 = 0x53474f;
  FUN_0074d6fb();
LAB_0053474f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


