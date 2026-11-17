/* FUN_0080b8a1 - 0x0080b8a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080b8a1(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f2a38;
  extraout_ECX[-1] = &PTR_FUN_008f29ec;
  *extraout_ECX = &PTR_FUN_008f29e8;
  extraout_ECX[0x15c] = &PTR_FUN_008f29c4;
  extraout_ECX[0x15d] = &PTR_ptr_00789daf_008f2988;
  extraout_ECX[0x15e] = &PTR_ptr_00789dcd_008f2940;
  extraout_ECX[0x15f] = &PTR_ptr_00789deb_008f292c;
  extraout_ECX[0x160] = &PTR_ptr_00789e09_008f2910;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[0x161] = &PTR_LAB_008f2908;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x176] = 1;
  while (extraout_ECX[0x176] != 0) {
    (*DAT_0097b3ec)(0);
  }
  if ((HDC)extraout_ECX[0x16a] != (HDC)0x0) {
    SelectObject((HDC)extraout_ECX[0x16a],(HGDIOBJ)extraout_ECX[0x169]);
    DeleteObject((HGDIOBJ)extraout_ECX[0x168]);
    DeleteDC((HDC)extraout_ECX[0x16a]);
    extraout_ECX[0x16a] = 0;
  }
  (*DAT_0097b55c)(*(undefined4 *)(DAT_00973cd8 + 4));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x171] = &PTR_FUN_008f2a78;
  FUN_0080d024();
  piVar1 = (int *)extraout_ECX[0x165];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined ***)
   (-(uint)(extraout_ECX != (undefined4 *)&DAT_00000008) & (uint)(extraout_ECX + 0x161)) =
       &PTR_FUN_008e89a0;
  FUN_0041f6a0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


