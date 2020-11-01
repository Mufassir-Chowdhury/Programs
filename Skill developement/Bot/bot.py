import os
import random
import discord
from dotenv import load_dotenv

load_dotenv()
TOKEN = os.getenv('DISCORD_TOKEN')
GUILD = os.getenv('DISCORD_GUILD')

client = discord.Client()

@client.event
async def on_ready():
    print(f'{client.user.name} has connected to Discord!')

@client.event
async def on_member_join(member):
    await member.create_dm()
    await member.dm_channel.send(
        f'Hi {member.name}, welcome to our Discord Community'
    )
@client.event
async def on_message(message):
    if message.author == client.user:
        return
    
    brooklyn_99_quotes = [
        'I\'m the human form of the "100: emoji.', 
        'Bingpot!', (
            'Cool. Cool cool cool cool cool cool cool, '
            'no doubt no doubt no doubt no doubt'
        ),
    ]
    if message.content == "99!":
        response = random.choice(brooklyn_99_quotes)
        await message.channel.send(response)
    if message.content == "shut up!":
        await message.channel.send("you shut up!")
    if message.content == "69!":
        await message.channel.send("96!")
    if message.content == "fuck you!":
        await message.channel.send("control your lust boi")
    if message.content == "class!":
        await message.channel.send(
                '1/2\n'
                '#Mon__19_10_20\n'
                'DS137 class at 12:00 PM\n'
                '⤇ zoom : 654 6441 0113\n'
                'Ethics147 class at 03:00 PM\n' 
                '### Reminder: klk mcq test ache\n'
                '⤇ zoom : 66849672192"\n'
        )
    if message.content == "assignments!":
        await message.channel.send("No assignments! Horray! :partying_face:")
    if "exams!" in message.content:
        await message.channel.send("No exams upcomming! :v:")
client.run(TOKEN)