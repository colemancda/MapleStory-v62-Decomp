/* FUN_008269f6 - 0x008269f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008269f6(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar2 = (undefined4 *)(extraout_ECX + 0x8c);
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414edd(s_http___maplestory_nexon_net_0096c5ec,0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    puVar2 = (undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 1;
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(puVar2);
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


