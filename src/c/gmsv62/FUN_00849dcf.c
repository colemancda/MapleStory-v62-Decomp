/* FUN_00849dcf - 0x00849dcf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00849dcf(void)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar3 = *(uint *)(extraout_ECX + 0x324c);
  do {
    if (uVar3 == 0) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar2 + 4) = 0;
LAB_00849e5b:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar2;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar3 + 4);
    FUN_0070b234();
    sVar1 = **(short **)(*(int *)(unaff_EBP + -0x10) + 0x5a0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (sVar1 == *(short *)(unaff_EBP + 0xc)) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(int *)(iVar2 + 4) = *(int *)(unaff_EBP + -0x10);
      FUN_0070b234();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00705df5();
      goto LAB_00849e5b;
    }
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    FUN_00705df5();
  } while( true );
}


