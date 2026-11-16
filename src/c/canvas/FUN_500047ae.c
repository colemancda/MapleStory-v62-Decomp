/* FUN_500047ae - 0x500047ae in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500047ae(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50014484;
  extraout_ECX[1] = &PTR_LAB_50014480;
  iVar1 = extraout_ECX[0xc];
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    (*DAT_50081dd8)(iVar1);
  }
  if (extraout_ECX[0xb] != 0) {
    (*DAT_50081dc8)(extraout_ECX[0xb]);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x16] = &PTR_FUN_50014488;
  FUN_5001181d((int)(extraout_ECX + 0x16));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x11] = &PTR_FUN_5001448c;
  FUN_5000f634((int)(extraout_ECX + 0x11));
  piVar2 = (int *)extraout_ECX[0xe];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((int *)extraout_ECX[4] != (int *)0x0) {
    FUN_500028a0((int *)extraout_ECX[4]);
    extraout_ECX[4] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 1)) =
       &PTR_LAB_50014490;
  *extraout_ECX = &PTR_LAB_50014498;
  return;
}


