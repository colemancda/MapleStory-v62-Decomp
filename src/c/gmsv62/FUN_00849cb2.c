/* FUN_00849cb2 - 0x00849cb2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849cb2(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(extraout_ECX + 0x324c);
  do {
    if (uVar4 == 0) {
LAB_00849d3c:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar4 + 4);
    FUN_0070b234();
    sVar1 = **(short **)(*(int *)(unaff_EBP + -0x10) + 0x5a0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (sVar1 == *(short *)(unaff_EBP + 8)) {
      uVar3 = FUN_0062e793(*(undefined4 *)(unaff_EBP + 8));
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x5a0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(iVar2 + 8) = uVar3;
      FUN_00705df5();
      goto LAB_00849d3c;
    }
    iVar2 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    FUN_00705df5();
  } while( true );
}


