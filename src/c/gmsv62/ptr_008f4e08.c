/* ptr_008f4e08 - 0x008f4e08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x008f4eec) overlaps instruction at (ram,0x008f4ee9)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
ptr_008f4e08(byte *param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            int param_6,byte *param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  byte bVar12;
  undefined4 in_EAX;
  byte bVar11;
  uint uVar9;
  byte *pbVar13;
  int extraout_ECX;
  undefined4 *unaff_EBX;
  uint uVar15;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int iVar17;
  undefined4 *unaff_EDI;
  undefined4 *puVar18;
  int *piVar19;
  undefined2 in_ES;
  undefined2 in_SS;
  byte bVar20;
  byte in_AF;
  bool in_ZF;
  bool bVar21;
  bool bVar22;
  byte in_TF;
  byte bVar23;
  bool bVar24;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar25;
  undefined4 *unaff_retaddr;
  undefined2 auStack_10 [2];
  int iStack_c;
  uint uStack_8;
  byte *pbVar8;
  uint uVar10;
  undefined2 uVar14;
  undefined3 uVar16;
  
  if (in_ZF) {
    param_1 = param_1 + 0x2f;
    bVar23 = *param_1;
    bVar11 = (byte)((uint)in_EAX >> 8);
    bVar12 = *param_1;
    *param_1 = *param_1 + bVar11;
    unaff_EDI = unaff_EBX + 1;
    uVar4 = in((short)param_6);
    *unaff_EBX = uVar4;
    bVar20 = (byte)param_8;
    in_AF = 9 < (bVar20 & 0xf) | in_AF;
    cVar5 = bVar20 + in_AF * -6 + (0x99 < bVar20 || CARRY1(bVar23,bVar11)) * -0x60;
    pbVar8 = (byte *)CONCAT31((int3)((uint)param_8 >> 8),cVar5);
    if (!SCARRY1(bVar12,bVar11)) {
      *pbVar8 = *pbVar8 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_ESI = unaff_retaddr;
    puVar18 = unaff_EDI;
    if ((0x99 >= bVar20 && !CARRY1(bVar23,bVar11)) && cVar5 != '\0') goto code_r0x008f4e84;
  }
  else {
    pbVar8 = (byte *)CONCAT31((int3)((uint)in_EAX >> 8),uRam963122c9);
    param_7 = param_1;
    param_6 = param_2;
    param_5 = unaff_EBX;
    param_3 = unaff_EBP;
  }
  uVar14 = (undefined2)((uint)param_7 >> 0x10);
  bVar20 = (byte)param_7;
  pbVar13 = (byte *)CONCAT22(uVar14,CONCAT11(0xc2,bVar20));
  bVar23 = (byte)pbVar8;
  *pbVar8 = bVar23;
  in_AF = 9 < (bVar23 & 0xf) | in_AF;
  uVar9 = CONCAT31((int3)((uint)pbVar8 >> 8),bVar23 + in_AF * -6) & 0xffffff0f;
  cVar5 = (char)((uint)pbVar8 >> 8) - in_AF;
  uVar10 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(cVar5,(char)uVar9));
  bVar12 = (bVar20 & 0x1f) % 9;
  bVar23 = *pbVar13;
  *pbVar13 = bVar23 << bVar12 | (byte)(CONCAT11(in_AF,bVar23) >> 9 - bVar12);
  param_5 = (undefined4 *)CONCAT22((short)((uint)param_5 >> 0x10),0x7400);
  *(char *)(uVar10 + 8) = *(char *)(uVar10 + 8) + cVar5;
  uVar4 = *unaff_ESI;
  piVar1 = (int *)(uVar10 + 0x27);
  iVar17 = *piVar1;
  *piVar1 = *piVar1 << 6;
  uVar9 = (uint)(iVar17 << 5 < 0);
  iVar17 = (uVar10 + 0xee3016a9) - uVar9;
  puVar18 = unaff_EDI + 1;
  *unaff_EDI = *unaff_ESI;
  cVar5 = -0x3f - (uVar10 < 0x11cfe957 || uVar10 + 0xee3016a9 < uVar9);
  pbVar8 = (byte *)CONCAT31((int3)((uint)iVar17 >> 8),cVar5);
  *pbVar8 = *pbVar8 + cVar5;
  param_7 = (byte *)CONCAT22(uVar14,CONCAT11(0x4e,bVar20));
  bVar23 = (bVar20 & 0x1f) % 9;
  uRam8b1a82f4 = in_ES;
  *param_7 = *param_7 << bVar23 | *param_7 >> 9 - bVar23;
  param_6 = CONCAT31((uint3)((uint)param_6 >> 8) ^ (uint3)((uint)uVar4 >> 8),0x7a);
  pbVar8[-0x69cedd37] = pbVar8[-0x69cedd37] + (char)((uint)iVar17 >> 8);
  unaff_ESI[-0xd] = unaff_ESI[-0xd] ^ (uint)(unaff_ESI + 1);
code_r0x008f4e84:
  param_4 = &param_9;
  uVar16 = (undefined3)((uint)param_5 >> 8);
  uVar15 = CONCAT31(uVar16,(char)((uint)(pbVar8 + 0x48cc2f83) >> 8));
  uVar6 = SUB41(pbVar8 + 0x48cc2f83,0);
  uVar10 = (uint)CONCAT11((char)param_5,uVar6);
  piVar1 = (int *)(uVar15 + 0x11d31f22);
  *piVar1 = *piVar1 + param_6;
  uVar9 = uRam88498623 & 0xd2;
  uRam88498623 = uRam88498623 & 0xffffffd2;
  bVar23 = 0;
  if (uVar9 != 0) {
    *param_7 = *param_7 | 0x31;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(uRam88498623,(short)param_6);
  DAT_50bf453d = uVar6;
  *(uint *)(param_3 + -0x5af1b8d0) = *(uint *)(param_3 + -0x5af1b8d0) | uVar15;
  uVar6 = in(10);
  piVar19 = puVar18 + -1;
  iVar17 = -0x77b679e5;
  sVar7 = (short)CONCAT31(uVar16,uVar6) + -1;
  _DAT_aa418f41 = (uint)sVar7;
  piVar1 = *(int **)(&stack0x7277e0bb + _DAT_aa418f41);
  *(char *)((_DAT_aa418f41 - 0x3a) + (int)piVar19 * 2) = (char)sVar7;
  bVar20 = 0x456caf4c < _DAT_aa418f41 || CARRY4(_DAT_aa418f41 + 0xba9350b3,(uint)(piVar1 < piVar19))
  ;
  bVar24 = SCARRY4((int)param_7,1);
  param_7 = param_7 + 1;
  bVar22 = (int)param_7 < 0;
  bVar21 = param_7 == (byte *)0x0;
  bVar12 = POPCOUNT((uint)param_7 & 0xff);
  do {
    uStack_8 = (uint)(in_NT & 1) * 0x4000 | (uint)bVar24 * 0x800 | 0x400 |
               (uint)(bVar23 & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)bVar22 * 0x80 |
               (uint)bVar21 * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)((bVar12 & 1) == 0) * 4 |
               (uint)bVar20 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
               (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
    puVar2 = (undefined1 *)segment(0xf000,(short)uVar10 + 0x41);
    *puVar2 = 0xb2;
    auStack_10[0] = 0xf000;
    iStack_c = iVar17;
    uVar25 = func_0x8c4c25cb();
    piVar1 = (int *)((int)((ulonglong)uVar25 >> 0x20) + 0x6a + extraout_ECX);
    *piVar1 = (*piVar1 - (int)uVar25) - (uint)bVar20;
    iVar17 = iVar17 + -1;
    uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)((ulonglong)uVar25 >> 0x20));
    LOCK();
    iVar3 = *piVar19;
    *piVar19 = param_3;
    UNLOCK();
    bVar12 = (byte)((uint)auStack_10 >> 8);
    bVar20 = CARRY1((byte)uStack_8,bVar12);
    bVar24 = SCARRY1((byte)uStack_8,bVar12);
    cVar5 = (byte)uStack_8 + bVar12;
    bVar22 = cVar5 < '\0';
    bVar21 = cVar5 == '\0';
    bVar12 = POPCOUNT(cVar5);
    param_3 = iVar3;
  } while (CONCAT31((int3)(CONCAT22((short)((uint)extraout_ECX >> 0x10),in_SS) >> 8),0xbd) != 1 &&
           !bVar21);
  return;
}


