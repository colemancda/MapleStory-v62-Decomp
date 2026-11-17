/* FUN_0071f6dc - 0x0071f6dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071f6dc(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x570) = uVar3;
  puVar2 = (undefined4 *)FUN_00598ef0(unaff_EBP + 8,uVar3);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004a2fef(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  uVar3 = FUN_00598f83(uVar3);
  FUN_00499fb8(uVar3);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x68) + 4) + 0x1c))
            (-1 < *(int *)(extraout_ECX + 0x570));
  FUN_0071f61a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


