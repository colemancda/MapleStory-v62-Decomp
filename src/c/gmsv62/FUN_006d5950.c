/* FUN_006d5950 - 0x006d5950 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_006d5950(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  
  FUN_00879bb8();
  uVar2 = FUN_0042452b();
  uVar3 = uVar2 & 0xff;
  if ((uVar3 < 3) &&
     (uVar2 = uVar3 * 0x20 + 0xb8 + extraout_ECX, *(int *)(uVar3 * 0x20 + 200 + extraout_ECX) != 0))
  {
    *(undefined ***)(unaff_EBP + -0x1bc) = &PTR_LAB_008e84a0;
    _memset((void *)(unaff_EBP + -0x1bc),0,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined ***)(unaff_EBP + -0x1bc) = &PTR_FUN_008e8cd8;
    FUN_004b876a(*(undefined4 *)(unaff_EBP + 8));
    iVar1 = *(int *)(extraout_ECX + 100);
    uVar2 = 1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      uVar2 = FUN_006d3586(uVar3,unaff_EBP + -0x1bc,1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


