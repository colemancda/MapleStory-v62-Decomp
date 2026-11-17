/* ptr_008f4df0 - 0x008f4df0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x008f4eec) overlaps instruction at (ram,0x008f4ee9)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_008f4df0(uint param_1,undefined4 param_2,uint param_3,uint param_4,byte *param_5,
                 int param_6,undefined4 *param_7,uint *param_8,uint param_9,undefined4 param_10,
                 uint param_11,uint param_12,byte *param_13,undefined4 param_14)

{
  char *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  short sVar6;
  byte bVar11;
  byte bVar13;
  undefined3 uVar14;
  uint uVar7;
  byte *pbVar9;
  undefined4 uVar10;
  int extraout_ECX;
  uint *unaff_EBX;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  undefined2 in_ES;
  undefined2 in_SS;
  bool in_CF;
  byte bVar18;
  byte in_AF;
  byte bVar19;
  bool bVar20;
  bool bVar21;
  byte in_TF;
  byte bVar22;
  bool bVar23;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar24;
  int unaff_retaddr;
  undefined2 auStack_34 [2];
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  byte *pbStack_10;
  undefined4 uStack_c;
  undefined2 auStack_8 [2];
  uint uVar8;
  char cVar12;
  
  puVar15 = (uint *)(unaff_retaddr + 1);
  if (in_CF) {
    bVar19 = 9 < ((byte)param_6 & 0xf) | in_AF;
    uVar7 = CONCAT31((int3)((uint)param_6 >> 8),(byte)param_6 + bVar19 * '\x06' + '`');
    bVar20 = uVar7 < 0x11cfe958;
    iVar16 = uVar7 + 0xee3016a8;
    param_9 = param_1;
  }
  else {
    pcVar1 = (char *)(param_6 + 0x75 + param_1 * 2);
    cVar12 = (char)param_4;
    *pcVar1 = *pcVar1 + cVar12;
    *(char *)((int)unaff_EBX + 0x65) = *(char *)((int)unaff_EBX + 0x65) + cVar12;
    pcVar1 = (char *)((int)User32Reserved + param_1 + (int)puVar15 * 2 + 0x21);
    *pcVar1 = *pcVar1 + cVar12;
    *(char *)(param_1 + 0x6f) = *(char *)(param_1 + 0x6f) + (char)param_5;
    out(*(undefined1 *)puVar15,(short)param_4);
    *(char *)(param_3 + 0x75) = *(char *)(param_3 + 0x75) + cVar12;
    out(*(undefined1 *)(unaff_retaddr + 2),(short)param_4);
    param_5 = param_5 + 0x2f;
    bVar13 = *param_5;
    bVar11 = (byte)((uint)param_6 >> 8);
    bVar22 = *param_5;
    *param_5 = *param_5 + bVar11;
    unaff_EBX = param_7 + 1;
    uVar10 = in((short)param_12);
    *param_7 = uVar10;
    bVar18 = (byte)param_14;
    bVar19 = 9 < (bVar18 & 0xf) | in_AF;
    uVar14 = (undefined3)((uint)param_14 >> 8);
    bVar4 = bVar18 + bVar19 * -6 + (0x99 < bVar18 || CARRY1(bVar13,bVar11)) * -0x60;
    pbVar9 = (byte *)CONCAT31(uVar14,bVar4);
    if (!SCARRY1(bVar22,bVar11)) {
      *pbVar9 = *pbVar9 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_28 = unaff_EBX;
    if ((0x99 >= bVar18 && !CARRY1(bVar13,bVar11)) && bVar4 != 0) goto code_r0x008f4e84;
    param_5 = (byte *)CONCAT22((short)((uint)param_13 >> 0x10),CONCAT11(0xc2,(byte)param_13));
    *pbVar9 = bVar4;
    bVar19 = 9 < (bVar4 & 0xf) | bVar19;
    uVar7 = CONCAT31(uVar14,bVar4 + bVar19 * -6) & 0xffffff0f;
    cVar12 = (char)((uint)param_14 >> 8) - bVar19;
    uVar8 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(cVar12,(char)uVar7));
    bVar22 = ((byte)param_13 & 0x1f) % 9;
    *param_5 = *param_5 << bVar22 | (byte)(CONCAT11(bVar19,*param_5) >> 9 - bVar22);
    param_3 = CONCAT22((short)(param_11 >> 0x10),0x7400);
    *(char *)(uVar8 + 8) = *(char *)(uVar8 + 8) + cVar12;
    param_4 = param_12 ^ *param_8;
    piVar2 = (int *)(uVar8 + 0x27);
    iVar16 = *piVar2;
    *piVar2 = *piVar2 << 6;
    uVar7 = (uint)(iVar16 << 5 < 0);
    bVar20 = uVar8 < 0x11cfe957 || uVar8 + 0xee3016a9 < uVar7;
    iVar16 = (uVar8 + 0xee3016a9) - uVar7;
    puVar15 = param_8;
  }
  puStack_28 = unaff_EBX + 1;
  *unaff_EBX = *puVar15;
  param_11 = param_3 & 0xffffff00;
  pbVar9 = (byte *)CONCAT31((int3)((uint)iVar16 >> 8),-0x3f - bVar20);
  *pbVar9 = *pbVar9 + (-0x3f - bVar20);
  bVar13 = (byte)((uint)param_5 >> 8);
  bVar18 = (byte)(param_3 >> 8);
  param_13 = (byte *)CONCAT22((short)((uint)param_5 >> 0x10),CONCAT11(bVar13 - bVar18,(byte)param_5)
                             );
  auStack_8[0] = in_ES;
  bVar22 = ((byte)param_5 & 0x1f) % 9;
  *param_13 = *param_13 << bVar22 | (byte)(CONCAT11(bVar13 < bVar18,*param_13) >> 9 - bVar22);
  param_12 = CONCAT31((int3)(param_4 >> 8),0x7a);
  pbVar9[-0x69cedd37] = pbVar9[-0x69cedd37] + (char)((uint)iVar16 >> 8);
  puVar15[-0xd] = puVar15[-0xd] ^ (uint)(puVar15 + 1);
code_r0x008f4e84:
  puStack_1c = (undefined1 *)auStack_8;
  pbVar9 = pbVar9 + 0x48cc2f83;
  uVar14 = (undefined3)(param_11 >> 8);
  uStack_18 = CONCAT31(uVar14,(char)((uint)pbVar9 >> 8));
  uVar10 = CONCAT22((short)((uint)pbVar9 >> 0x10),CONCAT11((char)param_11,(char)pbVar9));
  *(int *)(uStack_18 + 0x11d31f22) = *(int *)(uStack_18 + 0x11d31f22) + param_12;
  uVar7 = uRam88498623 & 0xd2;
  uRam88498623 = uRam88498623 & 0xffffffd2;
  bVar22 = 0;
  if (uVar7 != 0) {
    *param_13 = *param_13 | 0x31;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_24 = 0x88498623;
  out(uRam88498623,(short)param_12);
  DAT_50bf453d = (char)pbVar9;
  *(uint *)(param_9 + 0xa50e4730) = *(uint *)(param_9 + 0xa50e4730) | uStack_18;
  uVar5 = in(10);
  puVar17 = puStack_28 + -1;
  iVar16 = -0x77b679e5;
  sVar6 = (short)CONCAT31(uVar14,uVar5) + -1;
  _DAT_aa418f41 = (uint)sVar6;
  puVar15 = *(uint **)(&stack0x7277e097 + _DAT_aa418f41);
  *(char *)((_DAT_aa418f41 - 0x3a) + (int)puVar17 * 2) = (char)sVar6;
  bVar18 = 0x456caf4c < _DAT_aa418f41 ||
           CARRY4(_DAT_aa418f41 + 0xba9350b3,(uint)(puVar15 < puVar17));
  bVar23 = SCARRY4((int)param_13,1);
  pbVar9 = param_13 + 1;
  bVar21 = (int)pbVar9 < 0;
  bVar20 = pbVar9 == (byte *)0x0;
  bVar13 = POPCOUNT((uint)pbVar9 & 0xff);
  uStack_20 = param_9;
  uStack_14 = param_12;
  pbStack_10 = param_13;
  uStack_c = uVar10;
  do {
    uStack_2c = (uint)(in_NT & 1) * 0x4000 | (uint)bVar23 * 0x800 | 0x400 |
                (uint)(bVar22 & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)bVar21 * 0x80 |
                (uint)bVar20 * 0x40 | (uint)(bVar19 & 1) * 0x10 | (uint)((bVar13 & 1) == 0) * 4 |
                (uint)bVar18 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
    puVar3 = (undefined1 *)segment(0xf000,(short)uVar10 + 0x41);
    *puVar3 = 0xb2;
    auStack_34[0] = 0xf000;
    iStack_30 = iVar16;
    uVar24 = func_0x8c4c25cb();
    puStack_28 = (uint *)((ulonglong)uVar24 >> 0x20);
    piVar2 = (int *)((int)puStack_28 + extraout_ECX + 0x6a);
    *piVar2 = (*piVar2 - (int)uVar24) - (uint)bVar18;
    iVar16 = iVar16 + -1;
    uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),(char)((ulonglong)uVar24 >> 0x20));
    LOCK();
    uVar7 = *puVar17;
    *puVar17 = param_9;
    UNLOCK();
    bVar13 = (byte)((uint)auStack_34 >> 8);
    bVar18 = CARRY1((byte)uStack_2c,bVar13);
    bVar23 = SCARRY1((byte)uStack_2c,bVar13);
    cVar12 = (byte)uStack_2c + bVar13;
    bVar21 = cVar12 < '\0';
    bVar20 = cVar12 == '\0';
    bVar13 = POPCOUNT(cVar12);
    param_9 = uVar7;
  } while (CONCAT31((int3)(CONCAT22((short)((uint)extraout_ECX >> 0x10),in_SS) >> 8),0xbd) != 1 &&
           !bVar20);
  return;
}


