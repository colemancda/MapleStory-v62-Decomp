/* FUN_51407eb0 - 0x51407eb0 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51407eb0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5140ad20();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (*(int *)(iVar2 + 0x24) == 0) {
    if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(iVar2 + 0x1c);
    }
    if (*(undefined4 **)(unaff_EBP + 0x10) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0x10) = *(undefined4 *)(iVar2 + 0x20);
    }
    if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(iVar2 + 0x1c);
    }
    if (*(undefined4 **)(unaff_EBP + 0x18) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0x18) = *(undefined4 *)(iVar2 + 0x20);
    }
    if (*(undefined4 **)(unaff_EBP + 0x1c) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0x1c) = 0;
    }
    if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0x20) = 0;
    }
    if (*(undefined8 **)(unaff_EBP + 0x24) != (undefined8 *)0x0) {
      **(undefined8 **)(unaff_EBP + 0x24) = 0;
    }
    if (*(undefined8 **)(unaff_EBP + 0x28) != (undefined8 *)0x0) {
      **(undefined8 **)(unaff_EBP + 0x28) = 0;
    }
    iVar2 = 0;
  }
  else {
    if ((*(short *)(unaff_EBP + 0x2c) == 0) || (*(short *)(unaff_EBP + 0x2c) == 10)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (!bVar1) {
      Ordinal_8(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_51405842((ushort *)(unaff_EBP + -0x1c),(ushort *)(unaff_EBP + 0x2c),0,3);
      if (iVar2 < 0) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = FUN_51405818((short *)(unaff_EBP + -0x1c));
        if (iVar3 < 0) {
          FUN_5140ac47(iVar3);
        }
        goto LAB_51407fd0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar2 = FUN_51405818((short *)(unaff_EBP + -0x1c));
      if (iVar2 < 0) {
        FUN_5140ac47(iVar2);
      }
    }
    iVar2 = FUN_51406adc();
  }
LAB_51407fd0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


