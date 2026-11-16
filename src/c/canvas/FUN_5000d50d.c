/* FUN_5000d50d - 0x5000d50d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_5000d50d(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  if ((*(short *)(unaff_EBP + 0x18) != 0) && (*(short *)(unaff_EBP + 0x18) != 10)) {
    Ordinal_8(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_5000cfbb((ushort *)(unaff_EBP + -0x20),(ushort *)(unaff_EBP + 0x18),0,3);
    if (iVar1 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = FUN_5000630c((short *)(unaff_EBP + -0x20));
      if (iVar2 < 0) {
        FUN_50012c97(iVar2);
      }
      goto LAB_5000d5c6;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x18);
    iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x20));
    if (iVar1 < 0) {
      FUN_50012c97(iVar1);
    }
  }
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_50081fc8;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_50081fcc;
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_50081fd0;
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_50081fd4;
  iVar1 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x84))
                    (*(int **)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                     *(undefined4 *)(unaff_EBP + -0x10),0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
LAB_5000d5c6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


