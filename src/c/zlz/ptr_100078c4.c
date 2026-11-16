/* ptr_100078c4 - 0x100078c4 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 ptr_100078c4(void)

{
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  
  if (unaff_ESI[1] == 0) {
    return unaff_EDI;
  }
  unaff_ESI[1] = unaff_ESI[1] + -1;
  unaff_ESI[2] = unaff_ESI[2] + 1;
  *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x100;
  *unaff_ESI = *unaff_ESI + 1;
  *(undefined4 *)unaff_ESI[7] = unaff_EBP;
  if (unaff_ESI[1] == 0) {
    return unaff_EBX;
  }
  unaff_ESI[1] = unaff_ESI[1] + -1;
  unaff_ESI[2] = unaff_ESI[2] + 1;
  *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI;
  *unaff_ESI = *unaff_ESI + 1;
  unaff_ESI[0xc] = ((undefined4 *)unaff_ESI[7])[2];
  *(undefined4 *)unaff_ESI[7] = 6;
  return 2;
}


