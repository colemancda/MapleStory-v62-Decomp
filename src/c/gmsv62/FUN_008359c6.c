/* FUN_008359c6 - 0x008359c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008359c6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 0xc) / 10000 == 0xe8) {
    iVar1 = FUN_004becbc(200,0);
    if (iVar1 != 0) {
      FUN_0060142b(0x4d,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
      FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
      iVar1 = FUN_00835ab5(unaff_EBP + -0x1c,0);
      if (iVar1 != 0) {
        uVar2 = FUN_007d1e08();
        FUN_00457d37(uVar2);
        FUN_004751b2(unaff_EBP + -0x1c);
        *(undefined4 *)(extraout_ECX + 0x208c) = 1;
        uVar2 = FUN_007d1e08();
        *(undefined4 *)(extraout_ECX + 0x2090) = uVar2;
        puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x8e7);
        uVar2 = *puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_007d4073(uVar2,100);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


