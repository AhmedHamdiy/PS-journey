#!/bin/bash

FOLDER="problems"

FILE_COUNT=$(find "$FOLDER" -type f | wc -l)
COUNT=$((FILE_COUNT-1))
{
  echo "🌟 Join me on my journey to master Problem Solving! 🌟"
  echo ""
  echo "📈 Number of solved problems: $COUNT"
} > README.md

echo "File count written to README.md"

