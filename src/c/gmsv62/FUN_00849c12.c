/* FUN_00849c12 - 0x00849c12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849c12(void)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar3 = *(uint *)(extraout_ECX + 0x324c);
  do {
    if (uVar3 == 0) {
LAB_00849ca2:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar3 + 4);
    FUN_0070b234();
    sVar1 = **(short **)(*(int *)(unaff_EBP + -0x10) + 0x5a0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (sVar1 == *(short *)(unaff_EBP + 8)) {
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_00815de9();
        FUN_00705df5();
      }
      FUN_0084f155(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00705df5();
      goto LAB_00849ca2;
    }
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    FUN_00705df5();
  } while( true );
}


