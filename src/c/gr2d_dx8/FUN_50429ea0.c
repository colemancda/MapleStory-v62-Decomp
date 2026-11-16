/* FUN_50429ea0 - 0x50429ea0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint FUN_50429ea0(void)

{
  ulonglong in_MM0;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = PackedFloatingMUL(in_MM0 & DAT_504377dc,(ulonglong)DAT_50437890);
  uVar2 = PackedFloatingToIntDwordConv(uVar1,uVar1);
  uVar1 = PackedIntToFloatingDwordConv(uVar2,uVar2);
  uVar1 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),DAT_504377a0);
  uVar4 = PackedFloatingADD(in_MM0 & DAT_504377dc,uVar1);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = PackedFloatingADD(uVar4,CONCAT44(uVar3,uVar3));
  uVar1 = CONCAT44((int)uVar1,(int)uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = PackedFloatingSUBR(uVar1,DAT_504377b0);
  }
  uVar4 = PackedFloatingMUL(uVar1,uVar1);
  uVar6 = PackedFloatingMUL(DAT_504377a8,uVar4);
  uVar5 = PackedFloatingMUL(DAT_504377b8,uVar4);
  uVar7 = PackedFloatingADD(uVar6,DAT_50437758);
  uVar6 = PackedFloatingMUL(DAT_504377c0,uVar4);
  uVar5 = PackedFloatingMUL(uVar7,uVar5);
  uVar7 = PackedFloatingADD(uVar5,DAT_50437758);
  uVar5 = PackedFloatingMUL(DAT_504377c8,uVar4);
  uVar4 = PackedFloatingMUL(uVar6,uVar7);
  uVar4 = PackedFloatingADD(uVar4,DAT_50437758);
  uVar4 = PackedFloatingMUL(uVar4,CONCAT44((int)DAT_50437758,(int)uVar5));
  uVar4 = PackedFloatingADD(uVar4,DAT_50437758 >> 0x20);
  PackedFloatingMUL(uVar4,CONCAT44((int)uVar1,(int)DAT_50437758));
  return (uint)in_MM0 ^ (uint)in_MM0 & 0x80000000;
}


