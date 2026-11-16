/* FUN_508033c9 - 0x508033c9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508033c9(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  extraout_ECX[-0x11] = &PTR_LAB_508171b0;
  extraout_ECX[-9] = &PTR_LAB_50817184;
  extraout_ECX[-2] = &PTR_LAB_50817150;
  extraout_ECX[-1] = &PTR_LAB_5081713c;
  *extraout_ECX = &PTR_FUN_50817138;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = &PTR_LAB_50817134;
  extraout_ECX[-0x10] = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_5081ead8;
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_5081eadc;
  iVar1 = extraout_ECX[-9];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = DAT_5081eae0;
  *(undefined4 *)(unaff_EBP + -0x14) = DAT_5081eae4;
  (**(code **)(iVar1 + 0x20))
            (extraout_ECX + -9,0,*(undefined4 *)(unaff_EBP + -0x20),
             *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
             *(undefined4 *)(unaff_EBP + -0x14));
  InterlockedDecrement(&DAT_5081e594);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5080263a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


